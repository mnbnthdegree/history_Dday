ARG RELEASE
FROM ghcr.io/epicgames/unreal-engine:dev-${RELEASE} as builder

USER root
RUN apt-get update && apt-get install -qq unixodbc ffmpeg
USER ue4

# Clone the source code for the example Unreal project
COPY --chown=ue4:ue4 ./ /tmp/project

# Package the example Unreal project
RUN /home/ue4/UnrealEngine/Engine/Build/BatchFiles/RunUAT.sh BuildCookRun \
        -clientconfig=Shipping -serverconfig=Shipping \
        -project=/tmp/project/War_room.uproject \
        -utf8output -nodebuginfo -allmaps -noP4 -cook -build -stage -prereqs -pak -archive \
        -archivedirectory=/tmp/project/dist \
        -platform=Linux

# Copy the packaged project into the Pixel Streaming runtime image
FROM ghcr.io/epicgames/unreal-engine:runtime-pixel-streaming
COPY --from=builder --chown=ue4:ue4 /tmp/project/dist/LinuxNoEditor /home/ue4/project
#COPY --chown=ue4:ue4 /LinuxNoEditor /home/ue4/project
COPY cuda-keyring_1.0-1_all.deb .
COPY 7fa2af80.pub .

USER root
RUN apt-key del 7fa2af80 && \
        sed -i '/developer\.download\.nvidia\.com\/compute\/cuda\/repos/d' /etc/apt/sources.list && \
        rm /etc/apt/sources.list.d/cuda.list && \
        apt-key add 7fa2af80.pub && rm 7fa2af80.pub && \
        dpkg -i cuda-keyring_1.0-1_all.deb && \
        rm cuda-keyring_1.0-1_all.deb && \
        apt-get update && apt-get install -qq ffmpeg
RUN apt-get update && apt-get install -qq lsb-release wget

USER root
COPY mysql-apt-config_0.8.20-1_all.deb .
RUN dpkg -i mysql-apt-config_0.8.20-1_all.deb
RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 467B942D3A79BD29
RUN apt-get update && apt-get install -qq unixodbc mysql-community-client-plugins mysql-connector-odbc
RUN apt install -y mysql-client mysql-community-server mysql-server
USER ue4

# Set the project as the container's entrypoint
ENTRYPOINT ["/home/ue4/project/War_room.sh", "-RenderOffscreen", "-Windowed", "-ForceRes", "-ResX=1280", "-ResY=720", "-PixelStreamingIP=127.0.0.1", "-PixelStreamingPort=8888"]


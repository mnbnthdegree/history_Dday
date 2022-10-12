ARG RELEASE
FROM ghcr.io/epicgames/unreal-engine:dev-${RELEASE} as builder

USER root
RUN apt-get update && apt-get install -qq unixodbc
USER ue4

# Clone the source code for the example Unreal project
COPY --chown=ue4:ue4 ./ /tmp/project

# Package the example Unreal project
RUN /home/ue4/UnrealEngine/Engine/Build/BatchFiles/RunUAT.sh BuildCookRun \
        -clientconfig=Shipping -serverconfig=Shipping \
        -project=/tmp/project/ESS_8_1.uproject \
        -utf8output -nodebuginfo -allmaps -noP4 -cook -build -stage -prereqs -pak -archive \
        -archivedirectory=/tmp/project/dist \
        -platform=Linux

# Copy the packaged project into the Pixel Streaming runtime image
FROM ghcr.io/epicgames/unreal-engine:runtime-pixel-streaming
COPY --from=builder --chown=ue4:ue4 /tmp/project/dist/LinuxNoEditor /home/ue4/project
#COPY --chown=ue4:ue4 /LinuxNoEditor /home/ue4/project

#USER root
#RUN apt-get update && apt-get install -qq lsb-release wget
#COPY mysql-apt-config_0.8.20-1_all.deb /tmp
#RUN dpkg -i /tmp/mysql-apt-config_0.8.20-1_all.deb
#RUN apt-get update && apt-get install -qq unixodbc mysql-community-client-plugins mysql-connector-odbc
#USER ue4

# Set the project as the container's entrypoint
ENTRYPOINT ["/home/ue4/project/ESS_8_1.sh", "-RenderOffscreen", "-Windowed", "-ForceRes", "-ResX=1280", "-ResY=720", "-PixelStreamingIP=127.0.0.1", "-PixelStreamingPort=8888"]


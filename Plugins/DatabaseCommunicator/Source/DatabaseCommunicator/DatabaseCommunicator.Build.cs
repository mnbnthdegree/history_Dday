//Copyright 2021 John Poole. All Rights Reserved.
using System.IO;
namespace UnrealBuildTool.Rules
{
	public class DatabaseCommunicator : ModuleRules
	{
        public DatabaseCommunicator(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            PublicIncludePaths.AddRange(
              new string[] {
                  "Runtime/Core/Public/Async",
                  "Runtime/Core/Public/Windows"
              });
            PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine"
				});
            if (Target.Platform == UnrealTargetPlatform.Linux || Target.Platform == UnrealTargetPlatform.Android)
            {
                string libPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../unixODBC-2.3.9"));
                PublicIncludePaths.Add(Path.Combine(libPath, "include"));
                PublicLibraryPaths.Add(Path.Combine(libPath, "DriverManager", ".libs"));
                PublicAdditionalLibraries.Add(Path.Combine(libPath, "DriverManager", ".libs", "libodbc"));
                System.Console.WriteLine("... unixODBC Path -> " + libPath);
            }
        }
	}
}
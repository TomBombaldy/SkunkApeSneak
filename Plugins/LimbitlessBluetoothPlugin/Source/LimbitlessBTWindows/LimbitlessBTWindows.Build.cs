using UnrealBuildTool;
using System.IO;

public class LimbitlessBTWindows : ModuleRules
{
    public LimbitlessBTWindows(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bUsePrecompiled = true

        PrecompileForTargets = PrecompileTargetsType.Any;
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "LimbitlessBluetoothPlugin",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
            }
        );

        if (Target.Platform != UnrealTargetPlatform.Win64)
        {
            return;
        }


        PrivateDependencyModuleNames.Add("WinBT");

        string windowsSdkVersion = Target.WindowsPlatform.WindowsSdkVersion;
        string windowsSdkPath = Target.WindowsPlatform.WindowsSdkDir;
		
        if (!string.IsNullOrEmpty(windowsSdkVersion) && !string.IsNullOrEmpty(windowsSdkPath))
        {
            string WinRTIncludePath = Path.Combine(windowsSdkPath, "Include", windowsSdkVersion, "cppwinrt");

            if (Directory.Exists(WinRTIncludePath))
            {
                PublicSystemIncludePaths.Add(WinRTIncludePath);
            }
            else
            {
                throw new BuildException($"WinRT Include Path not found: {WinRTIncludePath}");
            }
        }

        PublicAdditionalLibraries.Add("windowsapp.lib");

        PublicSystemLibraries.Add("WindowsApp.lib");

    }
}
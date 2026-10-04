using UnrealBuildTool;

public class LimbitlessBTAndroid : ModuleRules
{
    public LimbitlessBTAndroid(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bUsePrecompiled = true

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "LimbitlessBluetoothPlugin", "BleUtilities",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "BleUtilities", 
                "AndroidPermission"
            }
        );
    }
}
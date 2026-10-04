using UnrealBuildTool;

public class LimbitlessBluetoothEditor : ModuleRules
{
    public LimbitlessBluetoothEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        bUsePrecompiled = true

        PrecompileForTargets = PrecompileTargetsType.Any;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core", "Blutility",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UMG",
                "Blutility",
                "UnrealEd",
                "EditorSubsystem",
                "LimbitlessBluetoothPlugin", 
                "PlatformManager",
            }
        );
    }
}
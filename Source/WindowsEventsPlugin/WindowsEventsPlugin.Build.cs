using UnrealBuildTool;

public class WindowsEventsPlugin : ModuleRules
{
    public WindowsEventsPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ApplicationCore" }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] { "Slate", "SlateCore" }
        );

        bEnableExceptions = true;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicSystemLibraries.AddRange(new string[] {
                "User32.lib",
                "Ole32.lib",
                "Advapi32.lib",
                "Psapi.lib"
            });
        }
    }
}

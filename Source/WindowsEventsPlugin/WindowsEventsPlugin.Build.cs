using UnrealBuildTool;
public class WindowsEventsPlugin:ModuleRules{
 public WindowsEventsPlugin(ReadOnlyTargetRules Target):base(Target){
  PCHUsage=PCHUsageMode.UseExplicitOrSharedPCHs;
  PublicDependencyModuleNames.AddRange(new[]{ "Core","CoreUObject","Engine","InputCore","ApplicationCore"});
  PrivateDependencyModuleNames.AddRange(new[]{ "Slate","SlateCore"});
  if(Target.Platform==UnrealTargetPlatform.Win64){
    PublicSystemLibraries.AddRange(new[]{"User32.lib","Ole32.lib","Advapi32.lib","Psapi.lib"});
  }
 }
}
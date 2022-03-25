// Some copyright should be here...

using UnrealBuildTool;

public class eelDevUtils : ModuleRules
{
	public eelDevUtils(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"Engine",
		});
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Slate",
			"SlateCore",
			"RHI",
			"Renderer",
			"RenderCore",
			"Projects",
		});
		
		if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicFrameworks.AddRange(new string[] { "AVFoundation", "CoreVideo", "CoreMedia" });
		}
	}
}

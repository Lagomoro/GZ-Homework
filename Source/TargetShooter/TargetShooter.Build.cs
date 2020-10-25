// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TargetShooter : ModuleRules
{
	public TargetShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

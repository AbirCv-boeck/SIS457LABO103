// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SIS457LABO103 : ModuleRules
{
	public SIS457LABO103(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

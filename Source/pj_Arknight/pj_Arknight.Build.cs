// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class pj_Arknight : ModuleRules
{
	public pj_Arknight(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "ToolClass","UMG", "SceneLoading", "SimpleArchives", "SimpleGameSetting", "SimpleTutorial" });
    }
}

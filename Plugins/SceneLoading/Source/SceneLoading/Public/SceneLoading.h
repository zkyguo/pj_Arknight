// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Modules/ModuleManager.h"


class FSceneLoadingModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/// <summary>
	/// Bind begin loading and end loading action
	/// </summary>
	/// <returns></returns>
    SCENELOADING_API void SetupSceneLoading(); //Export DLL of scene loading, SetupSceneLoading can be use in other module

private:
	void BeginLoadingScreen(const FString &MapName);
	void EndLoadingScreen(UWorld* MapName);
};

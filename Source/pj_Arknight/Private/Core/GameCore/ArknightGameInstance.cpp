// Fill out your copyright notice in the Description page of Project Settings.

//Description : core of game, duty for manage game until close
#include "Core/GameCore/ArknightGameInstance.h"
#include "../../../../../Plugins/SceneLoading/Source/SceneLoading/Public/SceneLoading.h"


void UArknightGameInstance::Init()
{
	Super::Init();

	/// <summary>
	/// Load SceneLoading module, if module is invalid, make program crash
	/// </summary>
	FSceneLoadingModule &SceneLoadingModule = FModuleManager::LoadModuleChecked<FSceneLoadingModule>("SceneLoading");
	SceneLoadingModule.SetupSceneLoading();
}

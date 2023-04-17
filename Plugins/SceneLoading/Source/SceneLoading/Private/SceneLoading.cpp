// Copyright Epic Games, Inc. All Rights Reserved.

#include "SceneLoading.h"
#include "SSceneLoading.h"
#include <MoviePlayer/Public/MoviePlayer.h>


#define LOCTEXT_NAMESPACE "FSceneLoadingModule"

void FSceneLoadingModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FSceneLoadingModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FSceneLoadingModule::SetupSceneLoading()
{
	FCoreUObjectDelegates::PreLoadMap.AddRaw(this, &FSceneLoadingModule::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddRaw(this, &FSceneLoadingModule::EndLoadingScreen);
}

void FSceneLoadingModule::BeginLoadingScreen(const FString &MapName)
{
	FLoadingScreenAttributes LoadingScreenArg;
	LoadingScreenArg.bAutoCompleteWhenLoadingCompletes = false;
	LoadingScreenArg.bMoviesAreSkippable = true;
	LoadingScreenArg.bWaitForManualStop = false;
	LoadingScreenArg.PlaybackType = EMoviePlaybackType::MT_LoadingLoop; //Once movie finish, loop it
	LoadingScreenArg.WidgetLoadingScreen = SNew(SSceneLoading, MapName);
	GetMoviePlayer()->SetupLoadingScreen(LoadingScreenArg);
	GetMoviePlayer()->PlayMovie();
}

void FSceneLoadingModule::EndLoadingScreen(UWorld* MapName)
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSceneLoadingModule, SceneLoading)
// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/HallUI/Core/ArknightHallHUD.h"
#include "Core/HallCore/ArknightHallGameState.h"
#include "Core/HallCore/ArknightHallPlayerController.h"
#include "Core/HallCore/ArknightHallPawn.h"
#include "Core/HallCore/ArknightHallPawn.h"
#include "Core/HallCore/ArknightHallGameMode.h"

AArknightHallGameMode::AArknightHallGameMode()
{
	GameStateClass = AArknightHallGameState::StaticClass();
	DefaultPawnClass = AArknightHallPawn::StaticClass();
	HUDClass = AArknightHallHUD::StaticClass();
}

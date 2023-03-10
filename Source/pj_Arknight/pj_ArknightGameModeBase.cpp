// Fill out your copyright notice in the Description page of Project Settings.


#include "pj_ArknightGameModeBase.h"
#include "./Public/Core/GameCore/ArknightGameState.h"
#include "./Public/Core/GameCore/ArknightPlayerController.h"
#include "./Public/Core/GameCore/ArknightGameCamera.h"
#include "./Public/Core/GameCore/ArknightPlayerState.h"
#include <UI/GameUI/Core/RuleOfHUD.h>

Apj_ArknightGameModeBase::Apj_ArknightGameModeBase()
{
	GameStateClass = AArknightGameState::StaticClass();
	PlayerControllerClass = AArknightPlayerController::StaticClass();
	DefaultPawnClass = AArknightGameCamera::StaticClass();
	PlayerStateClass = AArknightPlayerState::StaticClass();
	HUDClass = ARuleOfHUD::StaticClass();

}
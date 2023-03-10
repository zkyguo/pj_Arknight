// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/ArknightPlayerController.h"

AArknightPlayerController::AArknightPlayerController()
{
	bShowMouseCursor = true;
}

void AArknightPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	float SpeedMovement = 20.f;
	ScreenMoveUnits.ListenScreenMove(this, SpeedMovement);
}

void AArknightPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputModeGameAndUI();
}

void AArknightPlayerController::SetInputModeGameAndUI()
{
	FInputModeGameAndUI InputMode;
	//Mouse lock with Viewpoint
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	//Mouse wont disppear while clicking
	InputMode.SetHideCursorDuringCapture(false);

	SetInputMode(InputMode);
}





// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameCore/ArknightPlayerController.h"
#include <Core/GameCore/ArknightGameCamera.h>

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
	SetInputComponent();
	
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

void AArknightPlayerController::SetInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("MouseWheelUp", IE_Pressed, this, &AArknightPlayerController::MouseWheelUp);
	InputComponent->BindAction("MouseWheelDown", IE_Pressed, this, &AArknightPlayerController::MouseWheelDown);
}

static float WheelValue = 100.f;
void AArknightPlayerController::MouseWheelUp()
{
	AArknightGameCamera* camera = Cast<AArknightGameCamera>(GetPawn());
	if (camera)
	{
		camera->zoom(true, WheelValue);
	}
}

void AArknightPlayerController::MouseWheelDown()
{
	AArknightGameCamera* camera = Cast<AArknightGameCamera>(GetPawn());
	if (camera)
	{
		camera->zoom(false, WheelValue);
	}
}





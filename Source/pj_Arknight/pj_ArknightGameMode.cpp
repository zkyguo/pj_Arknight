// Copyright Epic Games, Inc. All Rights Reserved.

#include "pj_ArknightGameMode.h"
#include "pj_ArknightPlayerController.h"
#include "pj_ArknightCharacter.h"
#include "UObject/ConstructorHelpers.h"

Apj_ArknightGameMode::Apj_ArknightGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Apj_ArknightPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "../../../../../Plugins/ToolClass/Source/ToolClass/Public/Tool/ScreenMove.h"
#include "ArknightPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AArknightPlayerController : public APlayerController
{
	GENERATED_BODY()

public :
	AArknightPlayerController();

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	/// <summary>
	/// Lock Mouse with UI
	/// </summary>
	void SetInputModeGameAndUI();

protected :
	FScreenMoveUnits ScreenMoveUnits;
};

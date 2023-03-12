// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../UMG/UI_MainHall.h"
#include "ArknightHallHUD.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AArknightHallHUD : public AHUD
{
	GENERATED_BODY()
	
public :
	AArknightHallHUD();
	virtual void BeginPlay() override;

private :
	/// <summary>
	/// Use to catch blueprint ressource 
	/// </summary>
	TSubclassOf<UUI_MainHall> mainHallClass;
	UUI_MainHall *Mainhall;
};

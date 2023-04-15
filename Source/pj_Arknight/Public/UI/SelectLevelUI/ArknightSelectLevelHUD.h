// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI/SelectLevelUI/UMG/UI_SelecLevelMain.h"
#include "ArknightSelectLevelHUD.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AArknightSelectLevelHUD : public AHUD
{
	GENERATED_BODY()


public:
	AArknightSelectLevelHUD();
	virtual void BeginPlay() override;
	TSubclassOf<UUI_SelecLevelMain> SelectLevelMainClass;
	UUI_SelecLevelMain* SelectLevelMain;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../UMG/UI_MScreen.h"
#include "RuleOfHUD.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API ARuleOfHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	ARuleOfHUD();
	virtual void BeginPlay() override;

private:
	TSubclassOf<UUI_MScreen> MainScreenClass;
	UUI_MScreen* MainScreen;
};

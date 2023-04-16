// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/ProgressBar.h>
#include <Components/TextBlock.h>
#include "UI_ToolBarSystem.generated.h"



/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_ToolBarSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UTextBlock* GameGoldRemain;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ChampionDeathNumber;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* GameTimer;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* EnemyDeathNumber;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* LevelEnemyRemained;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* GSProgressBar;

public:
	virtual void NativeConstruct();
};

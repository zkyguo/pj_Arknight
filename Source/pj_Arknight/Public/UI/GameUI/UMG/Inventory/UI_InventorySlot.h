// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/Image.h>
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "UI_InventorySlot.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_InventorySlot : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()
	
	UPROPERTY(meta = (BindWidget))
	UImage* ChampionsIcon;

	UPROPERTY(meta = (BindWidget))
	UImage* ChampionsCD;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ChampionsPrepareSpawnNumber;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ChampionsCompleteSpawnNumber;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ChampionsCDValue;

	UPROPERTY(meta = (BindWidget))
	UButton* ChampionsInventorySlotButton;

public:
	virtual void NativeConstruct();
};

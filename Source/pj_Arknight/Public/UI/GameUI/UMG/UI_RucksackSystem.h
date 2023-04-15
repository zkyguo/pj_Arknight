// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "Inventory/UI_Inventory.h"
#include "UI_RucksackSystem.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_RucksackSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UUI_Inventory* Inventory;

public:
	virtual void NativeConstruct();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "UI_MissionSystem.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_MissionSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ConditionBase;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ConditionA;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ConditionB;

	UPROPERTY(meta = (BindWidget))
	UButton* ConditionButton;

public:
	virtual void NativeConstruct();

	UFUNCTION()
	void Condition();
};

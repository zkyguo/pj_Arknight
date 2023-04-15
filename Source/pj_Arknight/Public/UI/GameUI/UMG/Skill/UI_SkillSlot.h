// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/Image.h>
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "UI_SkillSlot.generated.h"




/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_SkillSlot : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UImage* SkillIcon;

	UPROPERTY(meta = (BindWidget))
	UImage* SkillIconCD;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SkillNumber;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* KeyValueNumber;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SkillCDValue;

	UPROPERTY(meta = (BindWidget))
	UButton* ClickButton;

public:
	virtual void NativeConstruct();

	UFUNCTION()
	void OnClickWidget();
};

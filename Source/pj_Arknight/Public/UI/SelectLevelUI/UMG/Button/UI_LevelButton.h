// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/Border.h>
#include <Components/ProgressBar.h>
#include <Components/Button.h>
#include "UI_LevelButton.generated.h"



/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_LevelButton : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UBorder* LevelBorder;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* LevelProgressBar;

	UPROPERTY(meta = (BindWidget))
	UButton* NextLevelButton;

public:
	virtual void NativeConstruct();

	UFUNCTION()
	void SelectLevel();
};

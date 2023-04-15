// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/Button.h>
#include <Components/CanvasPanel.h>
#include "Button/UI_LevelButton.h"
#include "UI_SelecLevelMain.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_SelecLevelMain : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UButton* ReturnMenuButton;

	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* SelectMap;
	
	virtual void NativeConstruct();
	UFUNCTION()
	void ReturnMenu();
private:
	TArray<UUI_LevelButton*> AllLevelButton;
	
protected:
	void InitSelectLevelButton();
};

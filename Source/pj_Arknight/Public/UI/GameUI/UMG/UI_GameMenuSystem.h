// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/Button.h>
#include "UI_GameMenuSystem.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_GameMenuSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UButton* ReturnGameButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SaveGameButton;

	UPROPERTY(meta = (BindWidget))
	UButton* GameSettingButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitGameButton;

public:
	virtual void NativeConstruct();

private:
	UFUNCTION()
	void ReturnGame();
	UFUNCTION()
	void SaveGame();
	UFUNCTION()
	void GameSetting();
	UFUNCTION()
	void GameQuit();

};

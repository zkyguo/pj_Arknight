// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UI_HallMenuSystem.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/Border.h>
#include <Components/SizeBox.h>
#include <UI_SaveAndLoadSystem.h>
#include <UI_GameSettingSystem.h>
#include <UI_TutorialSystem.h>
#include "UI_MainHall.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_MainHall : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UUI_HallMenuSystem* HallMenuSystem;

	UPROPERTY(meta = (BindWidget))
	UBorder* MainBoard;

	UPROPERTY(meta = (BindWidget))
	USizeBox* BoxList;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUI_SaveAndLoadSystem> SaveAndLoadSystemClass;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUI_GameSettingSystem> GameSettingsSystemClass;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUI_TutorialSystem> TutorialSystemClass;

public :
	virtual void NativeConstruct();

	UFUNCTION()
	void GameStart();
	UFUNCTION()
	void SecretTerritory();
	UFUNCTION()
	void History();
	UFUNCTION()
	void GameSettings();
	UFUNCTION()
	void TutorialWebsite();
	UFUNCTION()
	void Browser();
	UFUNCTION()
	void DLC();
	UFUNCTION()
	void QuitGame();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_HallMenuSystem.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_HallMenuSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UButton* GameStartButton;

	UPROPERTY(meta = (BindWidget))
	UButton* SecretTerritoryButton;

	UPROPERTY(meta = (BindWidget))
    UButton* HistoryButton;

	UPROPERTY(meta = (BindWidget))
	UButton* GameSettingButton;

	UPROPERTY(meta = (BindWidget))
    UButton* TutorialWebsiteButton;

	UPROPERTY(meta = (BindWidget))
	UButton* BrowserButton;

	UPROPERTY(meta = (BindWidget))
	UButton* DLCButton;

	UPROPERTY(meta = (BindWidget))
	UButton* QuitGameButton;

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

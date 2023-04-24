// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/HallUI/UMG/UI_HallMenuSystem.h"


void UUI_HallMenuSystem::NativeConstruct()
{
	Super::NativeConstruct();
	
}

void UUI_HallMenuSystem::BindGameStart(FOnButtonClickedEvent ClickedEvent)
{
	GameStartButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindSecretTerritory(FOnButtonClickedEvent ClickedEvent)
{
	SecretTerritoryButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindHistory(FOnButtonClickedEvent ClickedEvent)
{
	HistoryButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindGameSetting(FOnButtonClickedEvent ClickedEvent)
{
	GameSettingButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindTutorial(FOnButtonClickedEvent ClickedEvent)
{
	TutorialWebsiteButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindBrowser(FOnButtonClickedEvent ClickedEvent)
{
	BrowserButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindDLC(FOnButtonClickedEvent ClickedEvent)
{
	DLCButton->OnClicked = ClickedEvent;
}

void UUI_HallMenuSystem::BindQuitGame(FOnButtonClickedEvent ClickedEvent)
{
	QuitGameButton->OnClicked = ClickedEvent;
}


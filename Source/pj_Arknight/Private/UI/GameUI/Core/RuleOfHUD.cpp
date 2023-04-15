// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/Core/RuleOfHUD.h"

ARuleOfHUD::ARuleOfHUD()
{
	//Read MainScreen_BP as class
	static ConstructorHelpers::FClassFinder<UUI_MScreen> GameMain_BPClass(TEXT("/Game/UI/Game/MainScreen_BP"));
	MainScreenClass = GameMain_BPClass.Class;
}

void ARuleOfHUD::BeginPlay()
{
	Super::BeginPlay();
	MainScreen = CreateWidget<UUI_MScreen>(GetWorld(), MainScreenClass);
	MainScreen->AddToViewport();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SelectLevelUI/ArknightSelectLevelHUD.h"

AArknightSelectLevelHUD::AArknightSelectLevelHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_SelecLevelMain> SelectMain_BPClass(TEXT("/Game/UI/Select/SelectMain_BP"));
	SelectLevelMainClass = SelectMain_BPClass.Class;
}

void AArknightSelectLevelHUD::BeginPlay()
{
	Super::BeginPlay();

	SelectLevelMain = CreateWidget<UUI_SelecLevelMain>(GetWorld(), SelectLevelMainClass);
	SelectLevelMain->AddToViewport();
}

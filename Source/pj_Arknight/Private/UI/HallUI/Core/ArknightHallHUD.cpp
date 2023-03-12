// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/Core/ArknightHallHUD.h"

AArknightHallHUD::AArknightHallHUD()
{
	static ConstructorHelpers::FClassFinder<UUI_MainHall>MainHall_BP(TEXT("/Game/UI/Hall/HallMain_BP"));
	mainHallClass = MainHall_BP.Class;
}

void AArknightHallHUD::BeginPlay()
{
	Super::BeginPlay();
	//Bind mainhallClass to world
	Mainhall = CreateWidget<UUI_MainHall>(GetWorld(), mainHallClass);
	Mainhall->AddToViewport();
}

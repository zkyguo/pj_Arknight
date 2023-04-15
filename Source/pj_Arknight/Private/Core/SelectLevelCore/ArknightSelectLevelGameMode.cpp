// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SelectLevelCore/ArknightSelectLevelGameMode.h"
#include "UI/SelectLevelUI/ArknightSelectLevelHUD.h"

AArknightSelectLevelGameMode::AArknightSelectLevelGameMode()
{
	HUDClass = AArknightSelectLevelHUD::StaticClass();
}

void AArknightSelectLevelGameMode::BeginPlay()
{

}

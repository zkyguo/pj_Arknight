// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ArknightSelectLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AArknightSelectLevelGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AArknightSelectLevelGameMode();
	virtual void BeginPlay() override;
};

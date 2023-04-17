// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ArknightGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UArknightGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public :
	virtual void Init() override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Core/RuleOfCharacter.h"
#include "gameType.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AEnemy : public ARuleOfCharacter
{
	GENERATED_BODY()

public :
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual EGameCharacterType::Type GetType();
};

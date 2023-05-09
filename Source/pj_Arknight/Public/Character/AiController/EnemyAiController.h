// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Core/RuleOfAIController.h"
#include "EnemyAiController.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AEnemyAiController : public ARuleOfAIController
{
	GENERATED_BODY()

public :

	virtual AActor* FindTarget();
	
};

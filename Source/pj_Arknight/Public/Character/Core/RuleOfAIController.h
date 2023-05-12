// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RuleOfAIController.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API ARuleOfAIController : public AAIController
{
	GENERATED_BODY()

public :
	virtual AActor* FindTarget() { return nullptr; }
	virtual void AttackTarget(AActor* Target);
	
};

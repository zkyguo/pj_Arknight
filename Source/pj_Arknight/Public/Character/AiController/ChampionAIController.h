// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Core/RuleOfAIController.h"
#include <Character/CharacterCore/Enemy.h>
#include "ChampionAIController.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AChampionAIController : public ARuleOfAIController
{
	GENERATED_BODY()

public : 
	virtual void Tick(float deltaTime) override;
	AChampionAIController();
	// Inherited via ARuleOfAIController
    virtual AActor* FindTarget() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void Attack();
	virtual void AttackTarget(AActor* Target);

protected:
	void BTService_FindTarget();

	UPROPERTY()
	TArray<ARuleOfCharacter*> EnemyInRange;

	TWeakObjectPtr<ARuleOfCharacter> Target;

	float tickFrequency;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Core/RuleOfCharacter.h"
#include "Champion.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API AChampion : public ARuleOfCharacter
{
	GENERATED_BODY()

public :
	AChampion();

	USkeletalMeshComponent* CharacterMesh;

    UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute")
	FRotator ChampionRotator;

protected:
	virtual float TakeDamage(float damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageSource);
};

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

	AChampion();

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute",meta=(AllowPrivateAccess = true))
    UParticleSystemComponent* ParticleMesh;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute",meta=(AllowPrivateAccess = true))
    UStaticMeshComponent* StaticMesh;


protected:
	virtual float TakeDamage(float damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageSource);
};

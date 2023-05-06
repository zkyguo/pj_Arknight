// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharacterCore/Champion.h"

AChampion::AChampion()
{
	CharacterMesh = GetMesh();
}

float AChampion::TakeDamage(float damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageSource)
{
	Super::TakeDamage(damage, DamageEvent, EventInstigator, DamageSource);

	return 0;
}

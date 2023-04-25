// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharacterCore/Champion.h"

AChampion::AChampion()
{
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Champion"));
	StaticMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

float AChampion::TakeDamage(float damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageSource)
{
	Super::TakeDamage(damage, DamageEvent, EventInstigator, DamageSource);

	return 0;
}

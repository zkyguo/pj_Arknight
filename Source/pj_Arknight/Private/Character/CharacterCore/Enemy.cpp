// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharacterCore/Enemy.h"

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

EGameCharacterType::Type AEnemy::GetType()
{
	return EGameCharacterType::Type::MINION;
}

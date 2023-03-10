// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Core/RuleOfCharacter.h"

// Sets default values
ARuleOfCharacter::ARuleOfCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARuleOfCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARuleOfCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARuleOfCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


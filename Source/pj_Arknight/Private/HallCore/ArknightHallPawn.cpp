// Fill out your copyright notice in the Description page of Project Settings.


#include "HallCore/ArknightHallPawn.h"

// Sets default values
AArknightHallPawn::AArknightHallPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArknightHallPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArknightHallPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AArknightHallPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


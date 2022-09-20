// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCore/ArknightGameCamera.h"

// Sets default values
AArknightGameCamera::AArknightGameCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArknightGameCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArknightGameCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AArknightGameCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


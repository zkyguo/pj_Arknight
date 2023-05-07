// Fill out your copyright notice in the Description page of Project Settings.
#include <Camera/CameraComponent.h>
#include <Components/BoxComponent.h>
#include "GameFramework/SpringArmComponent.h"
#include "Core/GameCore/ArknightGameCamera.h"


// Sets default values
AArknightGameCamera::AArknightGameCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Boom"));
	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	MarkBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Sign"));

	CameraBoom->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	MainCamera->AttachToComponent(CameraBoom, FAttachmentTransformRules::KeepRelativeTransform);
	MarkBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));

	MarkBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MarkBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	
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

void AArknightGameCamera::zoom(bool bZoom, const float& zoomspeed)
{
	if (bZoom)
	{
		if (CameraBoom->TargetArmLength > 400)
		{
			CameraBoom->TargetArmLength -= zoomspeed * 2;
		}
	}
	else
	{
		if (CameraBoom->TargetArmLength < 400)
		{
			CameraBoom->TargetArmLength += zoomspeed * 2;
		}
	}

}


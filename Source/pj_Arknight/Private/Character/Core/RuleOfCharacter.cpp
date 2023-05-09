// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Core/RuleOfCharacter.h"

// Sets default values
ARuleOfCharacter::ARuleOfCharacter()
	:isAttack(false)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HomingPoint = CreateDefaultSubobject<USceneComponent>(TEXT("HomingPoint"));
	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	OpenFirePoint = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnPoint"));
	TraceShowCharacterInformation = CreateDefaultSubobject<UBoxComponent>(TEXT("TraceBox"));

	HomingPoint->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Widget->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	OpenFirePoint->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	TraceShowCharacterInformation->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	TraceShowCharacterInformation->SetCollisionProfileName("Scanning");
	TraceShowCharacterInformation->SetBoxExtent(FVector(38,38,100));
}

EGameCharacterType::Type ARuleOfCharacter::GetType()
{
	throw std::logic_error("The method or operation is not implemented.");
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

float ARuleOfCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageSourceActor)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageSourceActor);

	return 0;
}

bool ARuleOfCharacter::IsDead()
{
	return false;
}

float ARuleOfCharacter::GetCurrentHealth()
{
	return 0;
}

float ARuleOfCharacter::GetMaxHealth()
{
	return 0;
}

bool ARuleOfCharacter::IsTeam()
{
	return false;
}


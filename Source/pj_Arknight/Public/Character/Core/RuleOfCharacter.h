// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/Character/IGameCharacter.h"
#include <Core/GameCore/ArknightPlayerController.h>
#include <Core/GameCore/ArknightGameState.h>
#include <Components/BoxComponent.h>
#include <Components/ArrowComponent.h>
#include <Components/SceneComponent.h>
#include <Components/WidgetComponent.h>
#include "gameType.h"
#include "RuleOfCharacter.generated.h"




UCLASS()
class PJ_ARKNIGHT_API ARuleOfCharacter : public ACharacter, public IGameCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARuleOfCharacter();

	/// <summary>
	/// Use mouse raycast to catch character
	/// </summary>
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute",meta=(AllowPrivateAccess = true))
	UBoxComponent* TraceShowCharacterInformation;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute",meta=(AllowPrivateAccess = true))
	UArrowComponent* OpenFirePoint;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute",meta=(AllowPrivateAccess = true))
	UWidgetComponent* Widget;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="BaseAttribute",meta=(AllowPrivateAccess = true))
	USceneComponent* HomingPoint;


	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual EGameCharacterType::Type GetType();

protected:
	virtual float TakeDamage(float damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageSource) override;
	virtual bool IsDead();
	virtual float GetCurrentHealth();
	virtual float GetMaxHealth();
	virtual bool IsTeam();

public:
	UFUNCTION(Blueprintable, BlueprintPure, Category = "Character|Attribute")
	bool isActive() {return IsDead();}

public :
	FORCEINLINE AArknightPlayerController* GetGameController() { return GetWorld() ? GetWorld()->GetFirstPlayerController<AArknightPlayerController>() : NULL; }
	FORCEINLINE AArknightGameState* GetGameState() { return GetWorld() ? GetWorld()->GetGameState<AArknightGameState>() : NULL; }

	FORCEINLINE USceneComponent* GetHomingPoint() const { return HomingPoint; }
	FORCEINLINE UArrowComponent* GetOpenFirePoint() const { return OpenFirePoint; }

public :
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	bool isAttack;
};

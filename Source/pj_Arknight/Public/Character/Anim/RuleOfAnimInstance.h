// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RuleOfAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API URuleOfAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	virtual void NativeInitializeAnimation();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

public :
	URuleOfAnimInstance();

public :
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	bool isAttack;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	bool isDead;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AnimAttribute")
	float Velocity;
};

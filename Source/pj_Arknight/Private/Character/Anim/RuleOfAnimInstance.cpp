// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Anim/RuleOfAnimInstance.h"
#include <Character/Core/RuleOfCharacter.h>

URuleOfAnimInstance::URuleOfAnimInstance()
	:isAttack(false),isDead(false),Velocity(0)
{

}

void URuleOfAnimInstance::NativeInitializeAnimation()
{

}

void URuleOfAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	ARuleOfCharacter* Character = Cast<ARuleOfCharacter>(TryGetPawnOwner());
	if (Character)
	{
		isAttack = Character->isAttack;
		isDead = !Character->isActive();
		Velocity = Character->GetVelocity().Size();
	}
}



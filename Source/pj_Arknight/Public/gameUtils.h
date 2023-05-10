// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterCore/Enemy.h"

class AActor;
namespace gameUtils
{
	AActor* FindNearestTarget(const TArray<ARuleOfCharacter*>& characters,const FVector selfLocation);

}

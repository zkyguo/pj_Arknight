// Copyright Epic Games, Inc. All Rights Reserved.
#include "gameUtils.h"


AActor* gameUtils::FindNearestTarget(const TArray<ARuleOfCharacter*>& charactersInRange,const FVector selfLocation)
{
	if (charactersInRange.Num())
	{
		float TargetDistance = 99999999;
		int32 CharacterIndex = INDEX_NONE;
		for (int32 i = 0; i < charactersInRange.Num(); i++)
		{
			if (ARuleOfCharacter* character = charactersInRange[i])
			{
				FVector TargetLocation = character->GetActorLocation();
				FVector directiionVector = TargetLocation - selfLocation;
				float distance = directiionVector.Size();
				if (distance < TargetDistance && character->isActive())
				{
					CharacterIndex = i;
					TargetDistance = distance;
				}
			}
		}
		if (CharacterIndex != INDEX_NONE)
		{
			return charactersInRange[CharacterIndex];
		}

	}
	return NULL;
}



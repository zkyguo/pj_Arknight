// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AiController/EnemyAiController.h"
#include <Character/CharacterCore/Champion.h>
#include "EngineUtils.h"
#include <gameUtils.h>


AActor* AEnemyAiController::FindTarget()
{
	
	/*auto GetNearestChampion = [&](const TArray<AChampion*> &AllChampion) -> AChampion*
	{
		if (AllChampion.Num())
		{
			float ChampionTargetDistance = 99999999;
			int32 ChampionIndex = INDEX_NONE;
			FVector selfLocation = GetPawn()->GetActorLocation();
			for (int32 i = 0; i < AllChampion.Num();i++)
			{
				if (AChampion* champ = AllChampion[i])
				{
					FVector championLocation = champ->GetActorLocation();
					FVector directiionVector = championLocation - selfLocation;
					float distance = directiionVector.Size();
					if (distance < ChampionTargetDistance)
					{
						ChampionIndex = i;
						ChampionTargetDistance = distance;
					}
				}
			}
			if (ChampionIndex != INDEX_NONE)
			{
				return AllChampion[ChampionIndex];
			}

		}
		return NULL;
	};*/


	TArray<ARuleOfCharacter*> allChampion;

	for(TActorIterator<AChampion>it(GetWorld(), AChampion::StaticClass());it;++it)
	{
		AChampion* champion = *it;
		allChampion.Add(champion);
	}

	AChampion* NearestChampion = Cast<AChampion>(gameUtils::FindNearestTarget(allChampion, GetPawn()->GetActorLocation()));


	return NearestChampion;

}

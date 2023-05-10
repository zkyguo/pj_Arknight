// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AiController/ChampionAIController.h"
#include <EngineUtils.h>
#include "Character/CharacterCore/Champion.h"
#include <gameUtils.h>

AChampionAIController::AChampionAIController()
	:tickFrequency(0)
{

}


void AChampionAIController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	tickFrequency += deltaTime;
	if (tickFrequency >= 0.5)
	{
		BTService_FindTarget();
	}
	if (EnemyInRange.Num())
	{
		if (AChampion* champion = GetPawn<AChampion>())
		{
			if (!Target.IsValid())
			{
				Target = Cast<ARuleOfCharacter>(FindTarget());
				if (Target.IsValid())
				{

				}
			}

		}
	}
	
}

AActor* AChampionAIController::FindTarget()
{
	if (EnemyInRange.Num())
	{
		return gameUtils::FindNearestTarget(EnemyInRange, GetPawn()->GetActorLocation());
	}

	return nullptr;
	
}

void AChampionAIController::BTService_FindTarget()
{
	EnemyInRange.Empty();


	if (AChampion* champion = GetPawn<AChampion>())
	{
		if (champion->isActive())
		{
			for (TActorIterator<AEnemy>it(GetWorld(), AEnemy::StaticClass()); it; ++it)
			{
				AEnemy* Enemy = *it;
				if (Enemy->isActive())
				{
					FVector TargetDistance = Enemy->GetActorLocation() - GetPawn()->GetActorLocation();
					if (TargetDistance.Size() <= 1000) //Change to attack range
					{
						EnemyInRange.Add(Enemy);
					}
				}
			}
			if (EnemyInRange.Num() > 0)
			{
				if (AChampion* champion = GetPawn<AChampion>()) {

					champion->isAttack = true;
				}
				else
				{
					if (AChampion* champion = GetPawn<AChampion>()) {

						champion->isAttack = false;

					}
				}
			}


		}

}

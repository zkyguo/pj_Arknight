// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BTTask/BTTAttackTarget.h"
#include <Character/AiController/EnemyAiController.h>
#include <AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Object.h>
#include <Character/Core/RuleOfCharacter.h>
#include <AIModule/Classes/BehaviorTree/BlackboardComponent.h>

UBTTAttackTarget::UBTTAttackTarget()
{
	NodeName = TEXT("Attack Target");
}

EBTNodeResult::Type UBTTAttackTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	
	if (AEnemyAiController* MyAiController = Cast<AEnemyAiController>(OwnerComp.GetOwner()))
	{
		if (UBlackboardComponent* BlackBoard = OwnerComp.GetBlackboardComponent())
		{
			if (BlackBoard_Actor.SelectedKeyType == UBlackboardKeyType_Object::StaticClass())
			{
				if (ARuleOfCharacter* ChampionTarget = Cast<ARuleOfCharacter>(BlackBoard->GetValueAsObject(BlackBoard_Actor.SelectedKeyName)))
				{
					MyAiController->AttackTarget(ChampionTarget);
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}

	return EBTNodeResult::Failed;
}

void UBTTAttackTarget::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	//Check if blackboard has data
	if (UBlackboardData* BBAsset = GetBlackboardAsset())
	{
		BlackBoard_Actor.ResolveSelectedKey(*BBAsset);
	}
	else
	{
		UE_LOG(LogBehaviorTree, Warning, TEXT("Cant initialize task : %s"), *GetName());
	}
}

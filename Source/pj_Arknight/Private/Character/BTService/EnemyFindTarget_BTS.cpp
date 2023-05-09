// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BTService/EnemyFindTarget_BTS.h"
#include "Character/AiController/EnemyAiController.h"
#include <AIModule/Classes/BehaviorTree/BlackboardComponent.h>
#include <GameFramework/CharacterMovementComponent.h>


void UEnemyFindTarget_BTS::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	
	if (AEnemyAiController* EnemyAi = Cast<AEnemyAiController>(OwnerComp.GetOwner()))
	{
		if (UBlackboardComponent* BlackBoard = OwnerComp.GetBlackboardComponent())
		{
			if (ARuleOfCharacter* NewTarget = Cast<class ARuleOfCharacter>(EnemyAi->FindTarget()))
			{
				if (Target != NewTarget)
				{
					if (ARuleOfCharacter* self = Cast<ARuleOfCharacter>(EnemyAi->GetPawn()))
					{
		
						self->GetCharacterMovement()->StopMovementImmediately();
					}

					Target = NewTarget;
				}

				if (Target.IsValid())
				{
					if (Target->isActive())
					{
						BlackBoard->SetValueAsObject(BlackBoardKey_Target.SelectedKeyName, Target.Get());
						BlackBoard->SetValueAsVector(BlackBoardKey_Location.SelectedKeyName, Target.Get()->GetActorLocation());
					}
					else
					{
						BlackBoard->SetValueAsObject(BlackBoardKey_Target.SelectedKeyName, NULL);
						BlackBoard->SetValueAsVector(BlackBoardKey_Location.SelectedKeyName, FVector::Zero());
					}
				}
				else
				{
					BlackBoard->SetValueAsObject(BlackBoardKey_Target.SelectedKeyName, NULL);
					BlackBoard->SetValueAsVector(BlackBoardKey_Location.SelectedKeyName, FVector::Zero());

				}
			}

			if (Target.IsValid())
			{
				FVector selfLocation = EnemyAi->GetPawn()->GetActorLocation();
				FVector targetDistance = selfLocation -  Target->GetActorLocation();
				if (targetDistance.Size() > 2200)
				{
					if (ARuleOfCharacter* EnemyCharacter = Cast<ARuleOfCharacter>(EnemyAi->GetPawn()))
					{
						EnemyCharacter->isAttack = false;
					}
				}

				BlackBoard->SetValueAsFloat(BlackBoardKey_Distance.SelectedKeyName, targetDistance.Size());
			}
			else
			{
				BlackBoard->SetValueAsFloat(BlackBoardKey_Distance.SelectedKeyName, 0);
			}
		}
	}

}

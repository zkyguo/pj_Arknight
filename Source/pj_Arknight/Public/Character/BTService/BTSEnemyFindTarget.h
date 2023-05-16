// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include <Character/Core/RuleOfCharacter.h>
#include "BTSEnemyFindTarget.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UBTSEnemyFindTarget : public UBTService
{
	GENERATED_BODY()
	
public : 

	/// <summary>
	/// Describe actions run during one tick of node BT
	/// </summary>
	/// <param name="OwnerComp"></param>
	/// <param name="NodeMemory"></param>
	/// <param name="DeltaSeconds"></param>
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category="BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Target;

	UPROPERTY(EditAnywhere, Category="BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Distance;
	
	UPROPERTY(EditAnywhere, Category="BlackBoard")
	struct FBlackboardKeySelector BlackBoardKey_Location;

	/** Notify called after GameplayTask finishes initialization (not active yet) */
	virtual void OnGameplayTaskInitialized(UGameplayTask& Task) {}

	/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) {}

	/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) {}

private: 
	TWeakObjectPtr<class ARuleOfCharacter> Target;
};

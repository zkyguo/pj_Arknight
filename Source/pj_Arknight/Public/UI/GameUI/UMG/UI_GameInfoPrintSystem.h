// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/TextBlock.h>
#include "UI_GameInfoPrintSystem.generated.h"


/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_GameInfoPrintSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TEXGameLog;

public:
	virtual void NativeConstruct();
};

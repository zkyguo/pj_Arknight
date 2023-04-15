// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include "UI_GameMenuSystem.h"
#include "UI_GameInfoPrintSystem.h"
#include "UI_MiniMapSystem.h"
#include "UI_PlayerSkillSystem.h"
#include "UI_RucksackSystem.h"
#include "UI_ToolBarSystem.h"
#include "UI_MScreen.generated.h"
#include "UI_MissionSystem.h"



/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_MScreen : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UUI_GameMenuSystem* GameMenuSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_GameInfoPrintSystem* GameInfoPrintSystem;
	
	UPROPERTY(meta = (BindWidget))
	UUI_MiniMapSystem* MiniMapSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_MissionSystem* MissionSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_PlayerSkillSystem* PlayerSkillSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_RucksackSystem* RucksackSystem;

	UPROPERTY(meta = (BindWidget))
	UUI_ToolBarSystem* ToolbarSystem;

public:
	virtual void NativeConstruct();

};

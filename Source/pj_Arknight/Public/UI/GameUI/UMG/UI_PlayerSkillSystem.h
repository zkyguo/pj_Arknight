// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <GameFramework/InputSettings.h>
#include "Skill/UI_SkillSlot.h"
#include "UI_PlayerSkillSystem.generated.h"



/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_PlayerSkillSystem : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UUI_SkillSlot* FreezSkill;

	UPROPERTY(meta = (BindWidget))
	UUI_SkillSlot* ExplosionSkill;

	UPROPERTY(meta = (BindWidget))
	UUI_SkillSlot* RecoverySkill;

	UPROPERTY(meta = (BindWidget))
	UUI_SkillSlot* ImproveSkill;

public:
	virtual void NativeConstruct();

private:
	FKey FreezSkillKey;
	FKey ExplosionSkillKey;
	FKey RecoverySkillKey;
	FKey ImproveSkillKey;
};

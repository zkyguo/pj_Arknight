#pragma once
#include "CoreMinimal.h"

class IGameCharacter
{
public:
	virtual bool IsDead() = 0;
	virtual float GetCurrentHealth() = 0;
	virtual float GetMaxHealth() = 0;
	virtual bool IsTeam() = 0;
};
#pragma once
#include "CoreMinimal.h"
#include "gameType.h"

/// <summary>
/// Describe common action of a game character
/// </summary>
class IGameCharacter
{
public:
	virtual bool IsDead() = 0;
	virtual float GetCurrentHealth() = 0;
	virtual float GetMaxHealth() = 0;
	virtual bool IsTeam() = 0;
	virtual EGameCharacterType::Type GetType() = 0;
};
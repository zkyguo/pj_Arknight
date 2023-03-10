#pragma once
#include "CoreMinimal.h"

enum EScreenMoveState
{
	None,
	Up,
	Down,
	Right,
	Left,
	RightUp,
	RightDown,
	LeftUp,
	LeftDown,
	Max

};

class APlayerController;

struct TOOLCLASS_API FScreenMoveUnits
{
	/// <summary>
	/// Listen screen move action
	/// </summary>
	/// <param name="playerControl"></param>
	bool ListenScreenMove(APlayerController* playerControl, const float& ScreenMoveSpeed = 100.f);

	/// <summary>
	/// Get the current cursor Move direction
	/// </summary>
	/// <param name="playerControl"></param>
	/// <returns></returns>
	EScreenMoveState CursorMove(const APlayerController* playerControl);

	/// <summary>
	/// Move the pawn follow mouse direction
	/// </summary>
	/// <param name="playercontroller"></param>
	/// <param name="screenMoveState"></param>
	/// <param name="moveSpeed"></param>
	/// <returns></returns>
	bool MoveDirection(APlayerController* playercontroller, EScreenMoveState screenMoveState, const float& ScreenMoveSpeed = 100.f);
};
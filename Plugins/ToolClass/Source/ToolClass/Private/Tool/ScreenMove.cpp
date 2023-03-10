#include "Tool/ScreenMove.h"
#include "GameFrameWork/PlayerController.h"

bool FScreenMoveUnits::ListenScreenMove(APlayerController *playerControl, const float& ScreenSpeedMove)
{
	return MoveDirection(playerControl, CursorMove(playerControl), ScreenSpeedMove);
}

EScreenMoveState FScreenMoveUnits::CursorMove(const APlayerController*playerControl)
{
	int32 SizeX = INDEX_NONE;
	int32 SizeY = INDEX_NONE;

	float MousePositionX = -1077000;
	float MousePositionY = -1077000;

	playerControl->GetViewportSize(SizeX, SizeY);
	playerControl->GetMousePosition(MousePositionX, MousePositionY);

	if (MousePositionX >= 0 && MousePositionX <= SizeX &&
		MousePositionY >= 0 && MousePositionY <= SizeY)
	{
		if (FMath::IsNearlyEqual(MousePositionX, 0.f, 5.f) && FMath::IsNearlyEqual(MousePositionY, 0.f, 5.f))
		{
			return EScreenMoveState::LeftUp;
		}
		else if (FMath::IsNearlyEqual(MousePositionX, 0.f, 5.f) && FMath::IsNearlyEqual(MousePositionY, SizeY, 5.f))
		{
			return EScreenMoveState::LeftDown;
		}
		else if (FMath::IsNearlyEqual(MousePositionX, 0.0f, 5.f))
		{
			return EScreenMoveState::Left;
		}
		else if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.f) && FMath::IsNearlyEqual(MousePositionY, 0.f, 5.f))
		{
			return EScreenMoveState::RightUp;
		}
		else if (FMath::IsNearlyEqual(MousePositionX, MousePositionX, 5.f) && FMath::IsNearlyEqual(MousePositionY, SizeY, 5.f))
		{
			return EScreenMoveState::RightDown;
		}
		else if (FMath::IsNearlyEqual(MousePositionX, SizeX, 5.f))
		{
			return EScreenMoveState::Right;
		}
		else if (FMath::IsNearlyEqual(MousePositionY, 0.f, 5.f))
		{
			return EScreenMoveState::Up;
		}
		else if (FMath::IsNearlyEqual(MousePositionY, SizeY, 5.f))
		{
			return EScreenMoveState::Down;
		}
	}
	return EScreenMoveState::None;
}

bool FScreenMoveUnits::MoveDirection(APlayerController *playerController, EScreenMoveState screenMoveState, const float& screenMoveSpeed)
{
	FVector OffsetValue = FVector::ZeroVector;

	if (playerController && playerController->GetPawn())
	{
		switch (screenMoveState)
		{
		case Up:
			OffsetValue = FVector(screenMoveSpeed, 0.f, 0.f);
			break;
		case Down:
			OffsetValue = FVector(-screenMoveSpeed, 0.f, 0.f);
			break;
		case Right:
			OffsetValue = FVector(0.f, screenMoveSpeed, 0.f);
			break;
		case Left:
			OffsetValue = FVector(0.f, -screenMoveSpeed, 0.f);
			break;
		case RightUp:
			OffsetValue = FVector(screenMoveSpeed, screenMoveSpeed, 0.f);
			break;
		case RightDown:
			OffsetValue = FVector(-screenMoveSpeed, screenMoveSpeed, 0.f);
			break;
		case LeftUp:
			OffsetValue = FVector(screenMoveSpeed, -screenMoveSpeed, 0.f);
			break;
		case LeftDown:
			OffsetValue = FVector(-screenMoveSpeed, -screenMoveSpeed, 0.f);
			break;
		}
		playerController->GetPawn()->AddActorWorldOffset(OffsetValue);
	}

	return OffsetValue != FVector::ZeroVector;
}

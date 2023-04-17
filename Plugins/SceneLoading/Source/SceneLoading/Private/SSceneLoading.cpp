#include "SSceneLoading.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Notifications/SProgressBar.h"

void SSceneLoading::Construct(const FArguments& InArgs, const FString &InMapName)
{
	MapName = InMapName;
	ChildSlot[SNew(SProgressBar).Percent(this,&SSceneLoading::GetProgress)];
}

TOptional<float> SSceneLoading::GetProgress() const
{
	float LoadPercentage = GetAsyncLoadPercentage(*MapName);

	return LoadPercentage * 0.01;
}


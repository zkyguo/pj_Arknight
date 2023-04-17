#pragma once

#include "Widgets/SCompoundWidget.h"

class SSceneLoading : public SCompoundWidget
{
public :
	SLATE_BEGIN_ARGS(SSceneLoading)
	{}
	SLATE_END_ARGS();

	void Construct(const FArguments& InArgs, const FString &MapName);
private:
	TOptional<float> GetProgress() const;
	FString MapName;

};


// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/SelectLevelUI/UMG/UI_SelecLevelMain.h"
#include <Kismet/GameplayStatics.h>

void UUI_SelecLevelMain::NativeConstruct()
{
	Super::NativeConstruct();
	InitSelectLevelButton();
	ReturnMenuButton->OnClicked.AddDynamic(this, &UUI_SelecLevelMain::ReturnMenu);
}

void UUI_SelecLevelMain::InitSelectLevelButton()
{
	if (SelectMap)
	{
		TArray<UPanelSlot*>PanelSlotArray = SelectMap->GetSlots();
		for (UPanelSlot* slot : PanelSlotArray)
		{
			if (UUI_LevelButton* LevelButtonArp = Cast<UUI_LevelButton>(slot->Content))
			{
				AllLevelButton.Add(LevelButtonArp);
			}
		}
	}
}

void UUI_SelecLevelMain::ReturnMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), "HallMap");
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/UMG/Inventory/UI_InventorySlot.h"

void UUI_InventorySlot::NativeConstruct()
{
	Super::NativeConstruct();
	ChampionsInventorySlotButton->OnClicked.AddDynamic(this, &UUI_InventorySlot::OnClickWidget);
}

void UUI_InventorySlot::OnClickWidget()
{
}

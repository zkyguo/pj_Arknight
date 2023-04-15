// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/GameUI/UMG/Inventory/UI_Inventory.h"

void UUI_Inventory::NativeConstruct()
{
	Super::NativeConstruct();
	LayoutInventorySlot(10, 1);
}

void UUI_Inventory::LayoutInventorySlot(int32 ColumnNumber, int32 RowNumber)
{
	if (InventorySlotClass)
	{
		for (int32 myRow = 0; myRow < RowNumber; myRow++)
		{
			for (int32 myColumn = 0; myColumn < ColumnNumber; myColumn++)
			{
				UUI_InventorySlot* SlotWidget = CreateWidget<UUI_InventorySlot>(GetWorld(), InventorySlotClass);
				if (SlotWidget)
				{
					UUniformGridSlot* GridSlot = SlotArrayInventory->AddChildToUniformGrid(SlotWidget);
					if (GridSlot)
					{
						GridSlot->SetColumn(myColumn);
						GridSlot->SetRow(myRow);
						GridSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
						GridSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
					}

					InventorySlotArray.Add(SlotWidget);
				}
			}
		}
		
	}
}

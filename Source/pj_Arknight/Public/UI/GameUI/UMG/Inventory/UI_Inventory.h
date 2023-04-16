// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Core/UI_RuleOfTheWidget.h"
#include <Components/UniformGridPanel.h>
#include <Components/UniformGridSlot.h>
#include "UI_InventorySlot.h"
#include "UI_Inventory.generated.h"



/**
 * 
 */
UCLASS()
class PJ_ARKNIGHT_API UUI_Inventory : public UUI_RuleOfTheWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel* SlotArrayInventory;

	UPROPERTY(EditDefaultsOnly, Category = UI)
	TSubclassOf<UUI_InventorySlot> InventorySlotClass;

	
public:
	virtual void NativeConstruct();
	void LayoutInventorySlot(int32 ColumnNumber, int32 RowNumber);
private :
	TArray<UUI_InventorySlot*> InventorySlotArray;
};

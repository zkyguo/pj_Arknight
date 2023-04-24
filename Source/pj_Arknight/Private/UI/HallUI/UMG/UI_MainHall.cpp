// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HallUI/UMG/UI_MainHall.h"
#include <Kismet/GameplayStatics.h>

void UUI_MainHall::NativeConstruct()
{
	Super::NativeConstruct();

	if (HallMenuSystem)
	{
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::GameStart);
			HallMenuSystem->BindGameStart(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::GameSettings);
			HallMenuSystem->BindGameSetting(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::SecretTerritory);
			HallMenuSystem->BindSecretTerritory(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::History);
			HallMenuSystem->BindHistory(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::Browser);
			HallMenuSystem->BindBrowser(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::TutorialWebsite);
			HallMenuSystem->BindTutorial(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::DLC);
			HallMenuSystem->BindDLC(Delegate);
		}
		{
			FOnButtonClickedEvent Delegate;
			Delegate.AddDynamic(this, &UUI_MainHall::QuitGame);
			HallMenuSystem->BindQuitGame(Delegate);
		}
	}
	
}

/// <summary>
/// Add AssistClass on T class and Show content to SizeBox
/// </summary>
/// <typeparam name="T"></typeparam>
/// <typeparam name="UserObject"></typeparam>
/// <param name="ThisClass"></param>
/// <param name="AssistClass"></param>
/// <param name="WidgetArray"></param>
/// <returns></returns>
template<class T, class UserObject>
UserObject* CreateAssistWidget(T* ThisClass, UClass* AssistClass, USizeBox* WidgetArray)
{
	UserObject* UserObjectElement = nullptr;

	//Play Video check
	if (0)
	{
		//Start Transition
	}

	//if there exists an child 
	if (WidgetArray->GetChildAt(0)->IsA(AssistClass))
	{
		//Finish Transition

		return UserObjectElement;
	}
	else
	{
		WidgetArray->ClearChildren();
	}

	//Add Object to size box
	UserObjectElement = CreateAssistWidget<UserObject>(ThisClass->GetWorld(), AssistClass);

	if (UserObjectElement)
	{
		if (WidgetArray->AddChild(UserObjectElement))
		{
			
		}
		else
		{
			UserObjectElement->RemoveFromParent();
		}
	}
	
	return UserObjectElement;
}

void UUI_MainHall::GameStart()
{
	UGameplayStatics::OpenLevel(GetWorld(), "SelectLevel");
}

void UUI_MainHall::SecretTerritory()
{

}

void UUI_MainHall::History()
{
	//Show widget of history
	CreateAssistWidget<UUI_MainHall,UUI_SaveAndLoadSystem>(this, SaveAndLoadSystemClass, BoxList);
}

void UUI_MainHall::GameSettings()
{
	//Show widget of GameSetting
	CreateAssistWidget<UUI_MainHall, UUI_GameSettingSystem>(this, SaveAndLoadSystemClass, BoxList);
}

void UUI_MainHall::TutorialWebsite()
{
	//Show widget of GameSetting
	CreateAssistWidget<UUI_MainHall, UUI_TutorialSystem>(this, SaveAndLoadSystemClass, BoxList);
}

void UUI_MainHall::Browser()
{
}

void UUI_MainHall::DLC()
{

}

void UUI_MainHall::QuitGame()
{
}
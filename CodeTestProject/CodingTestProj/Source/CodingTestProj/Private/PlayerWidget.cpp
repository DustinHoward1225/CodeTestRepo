// Copyright Epic Games, Inc. All Rights Reserved.

//#include "CodingTestProjCharacter.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.h"

void UPlayerWidget::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	//Tick function for setting the bar value to the player's cooldown
	Super::NativeTick(MyGeometry, DeltaTime);
	if (Character->bProjectileCooldown)
	{
		CooldownBar->SetPercent(Character->CooldownSecondsLength / Character->CooldownSecondsMax);
	}
}
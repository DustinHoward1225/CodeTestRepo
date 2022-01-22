// Copyright Epic Games, Inc. All Rights Reserved.

//#include "CodingTestProjCharacter.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.h"

//UPlayerWidget::UPlayerWidget()
//{
	//PrimaryActorTick.bCanEverTick = true;
//}

void UPlayerWidget::UpdateCooldownAmount(float Value)
{
	//ACodingTestProjCharacter* OtherChar;
	//if (Character = OtherChar)
	//{
//
	//}
	
}

void UPlayerWidget::ResetCooldown()
{

}

void UPlayerWidget::NativeTick(const FGeometry& MyGeometry, float DeltaTime)
{
	
	Super::NativeTick(MyGeometry, DeltaTime);
	if (Character->bProjectileCooldown)
	{
		CooldownBar->SetPercent(Character->CooldownLength / Character->CooldownMax);
	}
}

/*
void UPlayerWidget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}
*/

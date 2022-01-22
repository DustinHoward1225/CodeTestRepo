// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "kismet/gameplaystatics.h"
#include "C:/Users/dusti/Documents/Github/ExWorldCodingTest/CodeTestRepo/CodeTestProject/CodingTestProj/Source/CodingTestProj/CodingTestProjCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "PlayerWidget.generated.h"

class ACodingTestProjCharacter;
/**
 * 
 */

class UProgressBar;
UCLASS()
class CODINGTESTPROJ_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()
	

	void UpdateCooldownAmount(float Value);

	void ResetCooldown();

	//void Tick();



public:

	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;
	//UPlayerWidget(/*const FObjectInitializer& ObjectInitializer*/);

	//virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		UProgressBar* CooldownBar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite/*/, meta = (BindWidget) */ )
		ACodingTestProjCharacter* Character;
};

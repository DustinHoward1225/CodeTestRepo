// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "kismet/gameplaystatics.h"
//#include "CodingTestProjCharacter.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

class ACodingTestProjCharacter;
/**
 * 
 */
UCLASS()
class CODINGTESTPROJ_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()
		UPlayerWidget(const FObjectInitializer& ObjectInitializer);

		void UpdateCooldownAmount(float Value);

	void ResetCooldown();



public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UProgressBar* CooldownBar;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite/*/, meta = (BindWidget) */ )
		//ACodingTestProjCharacter* Character;
};

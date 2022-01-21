// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UIWidget.generated.h"

/**
 * 
 */
UCLASS()
class CODINGTESTPROJ_API UUIWidget : public UUserWidget
{
	GENERATED_BODY()

	//UUIWidget(const FObjectInitializer& ObjectInitializer);

	void UpdateCooldownAmount(float Value);

	void ResetCooldown();

	

public:
	
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		//class UProgressBar* CooldownBar;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite/*/, meta = (BindWidget) */ )
	//AActor* Character;
};

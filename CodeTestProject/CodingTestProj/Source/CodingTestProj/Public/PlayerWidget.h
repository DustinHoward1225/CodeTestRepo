// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "kismet/gameplaystatics.h"
#include "CodingTestProjCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "PlayerWidget.generated.h"

/**Defined classes for use */
class ACodingTestProjCharacter;
class UProgressBar;

/** Player Widget */
UCLASS()
class CODINGTESTPROJ_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/** Called every frame */
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaTime) override;

	/** Progress bar to affect */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		UProgressBar* CooldownBar;

	/** Player to read cooldown value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ACodingTestProjCharacter* Character;
};

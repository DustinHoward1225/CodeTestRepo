// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodingTestProjGameMode.h"
#include "CodingTestProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodingTestProjGameMode::ACodingTestProjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

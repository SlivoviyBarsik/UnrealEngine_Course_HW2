// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_Course_HW2GameMode.h"
#include "UE_Course_HW2Character.h"
#include "UObject/ConstructorHelpers.h"

AUE_Course_HW2GameMode::AUE_Course_HW2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

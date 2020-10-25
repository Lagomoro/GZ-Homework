// Copyright Epic Games, Inc. All Rights Reserved.

#include "TargetShooterGameMode.h"
#include "TargetShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATargetShooterGameMode::ATargetShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_Test_2GameMode.h"
#include "CPP_Test_2Character.h"
#include "UObject/ConstructorHelpers.h"

ACPP_Test_2GameMode::ACPP_Test_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

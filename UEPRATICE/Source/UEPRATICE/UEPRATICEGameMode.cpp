// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEPRATICEGameMode.h"
#include "UEPRATICECharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEPRATICEGameMode::AUEPRATICEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

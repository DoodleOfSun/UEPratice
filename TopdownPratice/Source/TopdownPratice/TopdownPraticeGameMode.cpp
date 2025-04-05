// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopdownPraticeGameMode.h"
#include "TopdownPraticePlayerController.h"
#include "TopdownPraticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopdownPraticeGameMode::ATopdownPraticeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopdownPraticePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	/*
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	*/

	static ConstructorHelpers::FClassFinder<APawn>
		PlayerPawnClassFinder(TEXT("/Game/Testing/BP_NewCharactor"));
	if (PlayerPawnClassFinder.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnClassFinder.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}


}
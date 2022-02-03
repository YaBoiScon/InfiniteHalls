// Copyright Epic Games, Inc. All Rights Reserved.

#include "InfiniteHallwayGameMode.h"
#include "InfiniteHallwayHUD.h"
#include "InfiniteHallwayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInfiniteHallwayGameMode::AInfiniteHallwayGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInfiniteHallwayHUD::StaticClass();
}

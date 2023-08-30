// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShopSystemMasteredGameMode.h"
#include "ShopSystemMasteredCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShopSystemMasteredGameMode::AShopSystemMasteredGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

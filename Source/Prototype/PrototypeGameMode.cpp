// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PrototypeGameMode.h"
#include "PrototypeCharacter.h"

APrototypeGameMode::APrototypeGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APrototypeCharacter::StaticClass();	
}

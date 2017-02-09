// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "HUD_Test.h"
#include "HUD_TestGameMode.h"
#include "HUD_TestHUD.h"
#include "HUD_TestCharacter.h"

AHUD_TestGameMode::AHUD_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHUD_TestHUD::StaticClass();
}

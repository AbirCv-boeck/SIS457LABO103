// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS457LABO103GameMode.h"
#include "SIS457LABO103PlayerController.h"
#include "SIS457LABO103Pawn.h"

ASIS457LABO103GameMode::ASIS457LABO103GameMode()
{
	// no pawn by default
	DefaultPawnClass = ASIS457LABO103Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ASIS457LABO103PlayerController::StaticClass();
}

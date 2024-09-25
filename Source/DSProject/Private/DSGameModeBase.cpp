// Fill out your copyright notice in the Description page of Project Settings.


#include "DSGameModeBase.h"
#include "DSPlayerController.h"
#include "DSGameSession.h"

ADSGameModeBase::ADSGameModeBase()
{
	PlayerControllerClass = ADSPlayerController::StaticClass();
	GameSessionClass = ADSGameSession::StaticClass();
}

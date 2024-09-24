// Fill out your copyright notice in the Description page of Project Settings.


#include "DSGameModeBase.h"
#include "DSPlayerController.h"

ADSGameModeBase::ADSGameModeBase()
{
	PlayerControllerClass = ADSPlayerController::StaticClass();
}

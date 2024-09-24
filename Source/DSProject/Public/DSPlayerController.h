// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DSPROJECT_API ADSPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ADSPlayerController();

protected:
	// Function called when play begins
	virtual void BeginPlay();
 
	//Function to sign into EOS Game Services
	void Login();
 
	//Callback function. This function is ran when signing into EOS Game Services completes. 
	void HandleLoginCompleted(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);
 
	//Delegate to bind callback event for login. 
	FDelegateHandle LoginDelegateHandle;
	
	
	
};

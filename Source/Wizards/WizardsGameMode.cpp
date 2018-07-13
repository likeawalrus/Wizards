// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "WizardsGameMode.h"
#include "Wizards.h"
#include "WizardsHUD.h"
#include "WizardsCharacter.h"
#include "WizardsPlayerController.h"
#include "Blueprint/UserWidget.h"

AWizardsGameMode::AWizardsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/WizardsCharacter_BP"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	PlayerControllerClass = AWizardsPlayerController::StaticClass();
	// use our custom HUD class
	HUDClass = AWizardsHUD::StaticClass();
	//static ConstructorHelpers::FClassFinder<UUserWidget> PlayerHudClassFinder(TEXT("/Game/FirstPerson/Widgets/wizardsHUD"));
	//HUDClass = PlayerHudClassFinder.Class;
}


void AWizardsGameMode::BeginPlay()
{
	Super::BeginPlay();

	AWizardsCharacter* myCharacter = Cast<AWizardsCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (playerHUD != nullptr)
	{
		myWidget = CreateWidget<UUserWidget>(GetWorld(), playerHUD);
		if (myWidget != nullptr)
		{
			myWidget->AddToViewport();
		}
	}
}
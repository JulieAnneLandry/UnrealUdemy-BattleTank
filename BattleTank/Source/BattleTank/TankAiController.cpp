// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAiController.h"
#include "BattleTank.h"

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();

	ATank* Tank = GetControlledTank();
	if (!Tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AiController not controlling a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIControlled Tank : %s"), *(Tank->GetName()));
	}
}

ATank* ATankAiController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
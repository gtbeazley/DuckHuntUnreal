// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckHuntGameModeBase.h"
#include "PlayerPawn.h"
#include "PlayerHUD.h"

ADuckHuntGameModeBase::ADuckHuntGameModeBase()
{
	DefaultPawnClass = APlayerPawn::StaticClass();
	HUDClass = APlayerHUD::StaticClass();
}


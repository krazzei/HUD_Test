// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GameFramework/HUD.h"
#include "HUDView.h"
#include "HUD_TestCharacter.h"
#include "HUD_TestHUD.generated.h"

UCLASS()
class AHUD_TestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AHUD_TestHUD();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	TSubclassOf<UHUDView> WidgetTemplate;

	UHUDView* HUDView;

	AHUD_TestCharacter* Player;
};

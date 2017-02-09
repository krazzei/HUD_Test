// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "HUD_Test.h"
#include "HUD_TestHUD.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"
#include "CanvasItem.h"

AHUD_TestHUD::AHUD_TestHUD()
{
	static ConstructorHelpers::FClassFinder<UHUDView> HUDViewObj(TEXT("/Game/FirstPerson/Widgets/HUD"));
	WidgetTemplate = HUDViewObj.Class;
}

void AHUD_TestHUD::BeginPlay()
{
	Super::BeginPlay();

	// Get owner.
	Player = Cast<AHUD_TestCharacter>(GetOwningPawn());
	// spawn hudview.
	if (WidgetTemplate)
	{
		HUDView = CreateWidget<UHUDView>(GetWorld(), WidgetTemplate);
		if (!HUDView->GetIsVisible())
		{
			HUDView->AddToViewport();
		}
	}
}

void AHUD_TestHUD::Tick(float Dt)
{
	Super::Tick(Dt);

	if (HUDView && Player)
	{
		HUDView->SetHealthPercent(Player->GetHealthPercent());
		HUDView->SetBulletsFired(Player->BulletsFired);
	}
}

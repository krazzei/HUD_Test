// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "HUDView.generated.h"

UCLASS()
class HUD_TEST_API UHUDView : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetHealthPercent(float percent);

	UFUNCTION(BlueprintImplementableEvent)
	void SetBulletsFired(int32 NumberOfBullets);
};

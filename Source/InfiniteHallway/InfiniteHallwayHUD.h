// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InfiniteHallwayHUD.generated.h"

UCLASS()
class AInfiniteHallwayHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInfiniteHallwayHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


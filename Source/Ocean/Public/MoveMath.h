// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MoveMath.generated.h"



/**
 * 
 */
UCLASS()
class OCEAN_API UMoveMath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Movement Math")
		static float count(float defaultSpeed, float forwardVelocityX, float knobMultiplyer);
};

// Fill out your copyright notice in the Description page of Project Settings.

#include "Battletank.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move the barrel the right amount this frame
	// Given a max elevtion speed, and the frame time

	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevte() called at speed %f"), DegreesPerSecond);
}

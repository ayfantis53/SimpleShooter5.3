// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SS_Character_movement_component.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API USS_Character_movement_component : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	/// @brief: Sets default values for this character's properties
	USS_Character_movement_component();
};

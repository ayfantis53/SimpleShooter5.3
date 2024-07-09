// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/SS_Gun_base.h"
#include "SS_Gun_sniper.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASS_Gun_sniper : public ASS_Gun_base
{
	GENERATED_BODY()

public:
	/// @brief: Sets default values for this actor's properties
	ASS_Gun_sniper();

protected:
	/// @brief: Use Constructor helpers to populate all properties
	auto setup_paths() -> void override;

private:
	//// ---------	SNIPER SELF ---------	////

	/// @brief:
	FString muzzle_flash_path_{ "ParticleSystem'/Game/AssetPacks/ParagonWraith/FX/Particles/Abilities/ScopedShot/FX/P_Wraith_Sniper_MuzzleFlash.P_Wraith_Sniper_MuzzleFlash'" };

	/// @brief:
	FString bullet_impact_path_{ "ParticleSystem'/Game/AssetPacks/ParagonWraith/FX/Particles/Abilities/ScopedShot/FX/P_Wraith_Sniper_HitCharacter.P_Wraith_Sniper_HitCharacter'" };

	/// @brief:
	FString bullet_trail_path_{ "ParticleSystem'/Game/AssetPacks/ParagonWraith/FX/Particles/Abilities/ScopedShot/FX/P_Sniper_Trail_Smoke_Spline.P_Sniper_Trail_Smoke_Spline'" };

	/// @brief:
	FString muzzle_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/4Sniper/FX/Sounds/A_Sniper_Cue.A_Sniper_Cue'" };

	/// @brief:
	FString impact_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Sounds/A_Rifle_Impact_Cue.A_Rifle_Impact_Cue'" };

	//// ---------	SNIPER MESH COMP ---------	////

	/// @brief:
	FString sniper_skeleton_path_{ "SkeletalMesh'/Game/AssetPacks/ShooterGame/Weapons/4Sniper/SK_Sniper.SK_Sniper'" };
};

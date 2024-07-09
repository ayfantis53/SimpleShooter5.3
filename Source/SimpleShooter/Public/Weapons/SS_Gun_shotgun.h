// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Weapons/SS_Gun_base.h"
#include "SS_Gun_shotgun.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASS_Gun_shotgun : public ASS_Gun_base
{
	GENERATED_BODY()

public:
	/// @brief: Sets default values for this actor's properties
	ASS_Gun_shotgun();

protected:
	/// @brief: Use Constructor helpers to populate all properties
	auto setup_paths() -> void override;

private:
	//// ---------	SHOTGUN SELF ---------	////

	/// @brief:
	FString muzzle_flash_path_{ "ParticleSystem'/Game/AssetPacks/ParagonWraith/FX/Particles/Abilities/Drone/FX/P_Wraith_Drone_Fire.P_Wraith_Drone_Fire'" };

	/// @brief:
	FString bullet_impact_path_{ "ParticleSystem'/Game/AssetPacks/ParagonWraith/FX/Particles/Abilities/ScopedShot/FX/P_Wraith_Sniper_HitWorld.P_Wraith_Sniper_HitWorld'" };

	/// @brief:
	FString muzzle_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/4Sniper/FX/Sounds/A_Sniper_Cue.A_Sniper_Cue'" };

	/// @brief:
	FString impact_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Sounds/A_Rifle_Impact_Cue.A_Rifle_Impact_Cue'" };

	//// ---------	SHOTGUN MESH COMP ---------	////

	/// @brief:
	FString shotgun_skeleton_path_{ "SkeletalMesh'/Game/AssetPacks/ShooterGame/Weapons/3ShotGun/SK_Shotgun.SK_Shotgun'" };
};

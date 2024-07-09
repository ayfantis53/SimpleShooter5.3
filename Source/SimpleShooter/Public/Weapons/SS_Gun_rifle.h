// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Weapons/SS_Gun_base.h"
#include "SS_Gun_rifle.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASS_Gun_rifle : public ASS_Gun_base
{
	GENERATED_BODY()
	
public:
	/// @brief: Sets default values for this actor's properties
	ASS_Gun_rifle();

protected:
	/// @brief: Use Constructor helpers to populate all properties
	auto setup_paths() -> void override;

private:

	//// ---------	RIFLE SELF ---------	////

	/// @brief:
	FString muzzle_flash_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Particles/P_AssaultRifle_MF.P_AssaultRifle_MF'" };

	/// @brief:
	FString bullet_impact_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Particles/P_AssaultRifle_IH.P_AssaultRifle_IH'" };

	/// @brief:
	//FString bullet_trail_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Particles/P_SmokeTrail.P_SmokeTrail'" };
	FString bullet_trail_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Particles/P_AssaultRifle_Trail.P_AssaultRifle_Trail'" };

	/// @brief:
	FString muzzle_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Sounds/A_RifleShot_Cue.A_RifleShot_Cue'" };

	/// @brief:
	FString impact_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/FX/Sounds/A_Rifle_Impact_Cue.A_Rifle_Impact_Cue'" };

	//// ---------	RIFLE MESH COMP ---------	////

	/// @brief:
	FString rifle_skeleton_path_{ "SkeletalMesh'/Game/AssetPacks/ShooterGame/Weapons/1Rifle/Rifle.Rifle'" };
};

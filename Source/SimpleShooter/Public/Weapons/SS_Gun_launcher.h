// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Weapons/SS_Gun_base.h"
#include "SS_Gun_launcher.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASS_Gun_launcher : public ASS_Gun_base
{
	GENERATED_BODY()

public:
	/// @brief: Sets default values for this actor's properties
	ASS_Gun_launcher();

protected:
	/// @brief: Use Constructor helpers to populate all properties
	auto setup_paths() -> void override;

private:
	//// ---------	LAUNCHER SELF ---------	////

	/// @brief:
	FString muzzle_flash_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/FX/Particles/P_Launcher_MFNew.P_Launcher_MFNew'" };

	/// @brief:
	FString muzzle_sound_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/FX/Sounds/A_Launcher_Cue.A_Launcher_Cue'" };

	//// ---------	LAUNCHER MESH COMP ---------	////

	/// @brief:
	FString launcher_skeleton_path_{ "SkeletalMesh'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/Launcher.Launcher'" };
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/SS_Shooter_character.h"
#include "SS_Enemy_character.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASS_Enemy_character : public ASS_Shooter_character
{
	GENERATED_BODY()

public:
	/// @brief: Sets default value for acceleration path to true
	ASS_Enemy_character(const FObjectInitializer& ObjectInitializer);

protected:
	/// @brief: Called when the game starts or when spawned
	auto BeginPlay() -> void override;

	/// @brief: setup of all constructor helpers to get paths of assets
	auto setup_character() -> void override;

private:
	/// @brief: path to players skeltal mesh
	FString enemy_mesh_path_{ "SkeletalMesh'/Game/AssetPacks/ParagonWraith/Characters/Heroes/Wraith/Skins/LunarOps/Meshes/Wraith_LunarOps.Wraith_LunarOps'" };
};

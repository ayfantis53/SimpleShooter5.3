// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SS_Projectile.generated.h"

class USoundBase;
class UParticleSystem;
class UCameraShakeBase;
class UParticleSystemComponent;
class UProjectileMovementComponent;

UCLASS()
class SIMPLESHOOTER_API ASS_Projectile : public AActor
{
	GENERATED_BODY()
	
public:	
	/// @brief: Sets default values for this actor's properties
	ASS_Projectile();

	/// @brief: Called every frame
	/// @param: delta_time
	auto Tick(float delta_time) -> void override;

protected:
	/// @brief: Called when the game starts or when spawned
	auto BeginPlay() -> void override;

	/// @brief: Use Constructor helpers to populate all properties
	auto setup_paths() -> void;

	/// @brief:
	/// @param: hit_comp
	/// @param: other_actor
	/// @param: other_comp
	/// @param: normal_impulse
	/// @param: hit
	UFUNCTION()
	void OnHit(UPrimitiveComponent* hit_comp, AActor* other_actor, UPrimitiveComponent* other_comp, FVector normal_impulse, const FHitResult& hit);

private:
	//// ---------	LAUNCHER PROJECTILE SELF ---------	////

	/// @brief:
	float damage_{ 250.f };

	/// @brief:
	float max_damage_{ 500.f };

	/// @brief:
	bool b_explosive_{ true };

	/// @brief:
	UPROPERTY()
	UParticleSystem* hit_particles_;

	/// @brief:
	FString hit_particles_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/FX/Particles/P_Launcher_IH.P_Launcher_IH'" };

	/// @brief:
	UPROPERTY()
	USoundBase* hit_sound_;

	/// @brief:
	FString sound_particles_path_{ "SoundCue'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/FX/Sounds/A_Explosion_Cue.A_Explosion_Cue'" };

	////	--------- LAUNCHER PROJECTILE MESH ---------	////

	/// @brief: Relative scale projectile mesh will be scaled to
	FVector transform_scale_{ FVector(0.2f) };

	/// @brief: Mesh has to be the root component or this projectile functionality doesnt work
	UPROPERTY()
	USceneComponent* root_comp_;

	/// @brief: Clear sphere were going to use to attach our trailing particles to
	UPROPERTY()
	UStaticMeshComponent* projectile_mesh_;

	/// @brief: path to our static mesh for Constructor helpers
	FString projectile_mesh_path_{ "StaticMesh'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/FX/SM_GrenadeSphere.SM_GrenadeSphere'" };

	//// ---------	LAUNCHER TRAIL PARTICLES ---------	////

	/// @brief: Relative scale projectile mesh will be scaled to
	FVector trail_particle_scale_{ FVector(5.f) };

	/// @brief:
	UPROPERTY()
	UParticleSystemComponent* trail_particles_;

	/// @brief:
	FString trail_particles_path_{ "ParticleSystem'/Game/AssetPacks/ShooterGame/Weapons/2Launcher/FX/Particles/P_Launcher_proj.P_Launcher_proj'" };

	//// ---------	LAUNCHER MOVEMENT COMP ---------	////

	/// @brief:
	UPROPERTY()
	UProjectileMovementComponent* projectile_movement_comp_;

	
};

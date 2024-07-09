// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Characters/SS_Shooter_character.h"
#include "SS_Player_character.generated.h"

class UInputAction;
class UInputComponent;
struct FInputActionValue;
class UInputMappingContext;


/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API ASS_Player_character : public ASS_Shooter_character
{
	GENERATED_BODY()
	
public:
	/// @brief: Sets default value for acceleration path to true
	ASS_Player_character(const FObjectInitializer& ObjectInitializer);

	/// @brief: Called every frame
	/// @param: delta_time Time taken between the frames of the gameplay can differ.
	auto Tick(float delta_time) -> void override;

	/// @brief: Called to bind functionality to input
	/// @param: Allows a Pawn to set up custom input bindings.
	auto SetupPlayerInputComponent(UInputComponent* player_input_component) -> void override;

	/// @brief: Percent of full health for progress bar visual
	auto health_bar_percent() const -> void;

protected:
	/// @brief: Called when the game starts or when spawned
	auto BeginPlay() -> void override;

	/// @brief: setup of all constructor helpers to get paths of assets
	virtual auto setup_character() -> void;

private:
	/// @brief: Populates inputs filepaths for Constructor Helpers.
	auto set_up_input() -> void;

	/// @brief: Player camera zooms in
	auto aiming_button_pressed(const FInputActionValue& value) -> void;

	/// @brief: Player camera reverts to original location
	auto aiming_button_released() -> void;

	/// @brief: 
	/// @param:
	auto camera_interp_zoom(float delta_time) -> void;

	/// @brief: lets character look up and turn sideways
	/// @param: value struct holding input action asis or boolean values
	auto look(const FInputActionValue& value) -> void;

	/// @brief: moves character left right forward backward
	/// @param: value struct holding input action asis or boolean values
	auto move(const FInputActionValue& value) -> void;

	//// CHARACTER COMPONENTS ////

	/// @brief: path to players skeltal mesh
	FString skeletal_mesh_path_{ "SkeletalMesh'/Game/AssetPacks/ParagonWraith/Characters/Heroes/Wraith/Skins/ODGreen/Meshes/Wraith_ODGreen'" };

	/// @brief: Maintains fixed distance from parent, retracts the children in collision, and spring back when not.
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* spring_arm_;

	/// @brief: Represents a camera viewpoint and settings.
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* camera_;

	//// ENHANCED INPUT COMPONENT ////

	/// @brief: Reference to player controller.
	class ASS_Player_controller* player_controller_ref_;

	/// @brief: Mapping Context for input, passed to player subsystem.
	UPROPERTY(VisibleAnywhere)
	UInputMappingContext* shooting_mapping_context_;

	/// @brief: Path to imc_ShootingContext
	FString imc_shooting_context_path_{ "InputMappingContext'/Game/EnhancedInputs/IMC_ShooterContext.IMC_ShooterContext'" };

	/// @brief: Mapping Context for aiming input, passed to player subsystem.
	UPROPERTY(VisibleAnywhere)
	UInputAction* aim_action_;

	/// @brief: Path to imc_ShootingContext
	FString aim_action_path_{ "InputAction'/Game/EnhancedInputs/InputActions/IA_Aiming.IA_Aiming'" };

	/// @brief: Mapping Context for jumping input, passed to player subsystem.
	UPROPERTY(VisibleAnywhere)
	UInputAction* jump_action_;

	/// @brief: Path to IA_Jump
	FString jump_action_path_{ "InputAction'/Game/EnhancedInputs/InputActions/IA_Jump.IA_Jump'" };

	/// @brief: Mapping Context for looking up down and turning input, passed to player subsystem.
	UPROPERTY(VisibleAnywhere)
	UInputAction* look_action_;

	/// @brief: Path to IA_Look
	FString look_action_path_{ "InputAction'/Game/EnhancedInputs/InputActions/IA_Look.IA_Look'" };

	/// @brief: Mapping Context for forward move input, passed to player subsystem.
	UPROPERTY(VisibleAnywhere)
	UInputAction* move_action_;

	/// @brief: Path to IA_Move
	FString move_action_path_{ "InputAction'/Game/EnhancedInputs/InputActions/IA_Move.IA_Move'" };

	/// @brief: Mapping Context for shooting input, passed to player subsystem.
	UPROPERTY(VisibleAnywhere)
	UInputAction* shoot_action_;

	/// @brief: Path to imc_ShootingContext
	FString shoot_action_path_{ "InputAction'/Game/EnhancedInputs/InputActions/IA_Shoot.IA_Shoot'" };
};

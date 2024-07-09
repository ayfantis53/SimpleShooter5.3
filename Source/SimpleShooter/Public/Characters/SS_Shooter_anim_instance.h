// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SS_Shooter_anim_instance.generated.h"


class ASS_Shooter_character;
/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API USS_Shooter_anim_instance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	/// @brief:
	/// @param: delta_time
	UFUNCTION(BlueprintCallable)
	void update_animation_properties(float delta_time);

protected:
	/// @brief: allows us to handle initialization of various properties on our animation instance
	virtual auto NativeInitializeAnimation() -> void override;

	/// @brief:
	/// @param: delta_time
	auto lean(float delta_time) -> void;

	/// @brief:
	auto turn_in_place() -> void;

private:
	/// @brief: Reference to shooter character player
	UPROPERTY()
	ASS_Shooter_character* shooter_character_ref_;

	/// MOVEMENT VARIABLES
	/// @brief: Reference to shooter character player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float speed_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool b_is_in_air_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool b_is_accelerating_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float movement_offset_yaw_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float last_movement_offset_yaw_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool b_aiming_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lean", meta = (AllowPrivateAccess = "true"))
	float yaw_delta_;

	/// @brief:
	FRotator character_rotation_;

	/// @brief:
	FRotator character_rotation_last_frame_;

	/// @brief:
	float rotation_curve_;

	/// @brief:
	float rotation_curve_last_frame_;

	/// TURN IN PLACE VARIABLES
	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TurnInPlace", meta = (AllowPrivateAccess = "true"))
	float tip_character_yaw_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TurnInPlace", meta = (AllowPrivateAccess = "true"))
	float tip_character_yaw_last_frame_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TurnInPlace", meta = (AllowPrivateAccess = "true"))
	float root_yaw_offset_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TurnInPlace", meta = (AllowPrivateAccess = "true"))
	float pitch_{ 0.f };

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TurnInPlace", meta = (AllowPrivateAccess = "true"))
	bool b_turning_in_place_;

	/// @brief:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "TurnInPlace", meta = (AllowPrivateAccess = "true"))
	bool full_body_;

	/// @brief: Players Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = "true"))
	bool b_is_dead_;
};

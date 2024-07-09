// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "SS_Bt_service_seen_player.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API USS_Bt_service_seen_player : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	/// @brief: Sets default values for this actor's properties
	USS_Bt_service_seen_player();

protected:
	/// @brief: Tick function this function should be considered as const (don't modify state of object) if node is not instanced!
	/// @param: owner_comp    The behavior tree owner of this node
	/// @param: node_memory   The instance memory of the current node
	/// @param: delta_seconds DeltaTime since last call
	auto TickNode(UBehaviorTreeComponent& owner_comp, uint8* node_memory, float delta_seconds) -> void override;

private:
	/// @brief: FX of a sound played for when gun shoots
	UPROPERTY()
	USoundBase* battle_cry_;

	FString battle_cry_path_{ "SoundCue'/Game/AssetPacks/GameDevTV/VoiceOvers/A_EnemySpeak_Cue.A_EnemySpeak_Cue'" };

	bool speak_{ true };
};

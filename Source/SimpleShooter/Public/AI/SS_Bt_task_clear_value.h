// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "SS_Bt_task_clear_value.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API USS_Bt_task_clear_value : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	/// @brief: Sets default values for this actor's properties
	USS_Bt_task_clear_value();

protected:
	/// @brief: starts this task
	/// @param:  owner_comp  The behavior tree owner of this node
	/// @param:  node_memory The instance memory of the current node
	/// @return: Succeeded, Failed or InProgress
	auto ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) -> EBTNodeResult::Type override;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"
#include "Enemy.h"

void AMyAIController::MakeAttackDecision(APawn* targetPawn)
{
	// Implement your attack decision logic here
	// For example, you can check the distance to the target and decide whether to attack or not
	auto controlledCharacter = Cast<AEnemy>(GetPawn());
	auto dist = FVector::Dist2D(
	targetPawn->GetActorLocation(),
		GetPawn()->GetTargetLocation());

	if (dist <= controlledCharacter->AttackRange && controlledCharacter->CanAttack())
	{
		controlledCharacter->Attack();
	}
}
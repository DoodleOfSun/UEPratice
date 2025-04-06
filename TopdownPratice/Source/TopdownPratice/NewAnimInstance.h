// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "NewAnimInstance.generated.h"

/**
 * 
 */


UENUM(BlueprintType)
enum class EPlayerState : uint8
{
	Locomotion = 0,
	Attack,
	Hit,
	Die
};

UCLASS()
class TOPDOWNPRATICE_API UNewAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerState state;

	UFUNCTION(BlueprintCallable)
	void OnStateAnimationEnds();
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerAvatar.generated.h"

UCLASS(Blueprintable)
class UEPRATICE_API APlayerAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerAvatar();

	UPROPERTY(EditAnywhere, Category = "PlayerAvatar Params")
	int HealthPoints = 500;

	UPROPERTY(EditAnywhere, Category = "PlayerAvatar Params")
	float Strength = 10;

	UPROPERTY(EditAnywhere, Category = "PlayerAvatar Params")
	float Armer = 3;

	UPROPERTY(EditAnywhere, Category = "PlayerAvatar Params")
	float AttackRange = 6.0f;

	UPROPERTY(EditAnywhere, Category = "PlayerAvatar Params")
	float AttackInterval = 1.2f;
	

protected:
	int _HealthPoints;
	float _AttackCountingDown;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable,
		Category="Pangaea | PlayerCharacter",
		meta = (DisplayName = "Get HP"))
	int GetHealthPoints();

	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	bool IsKilled();

	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	bool CanAttack();

	void Attack();
	void Hit(int damage);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void DieProcess();
};

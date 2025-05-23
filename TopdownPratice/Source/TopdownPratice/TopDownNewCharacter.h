// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TopDownNewCharacter.generated.h"

UCLASS(Blueprintable)
class TOPDOWNPRATICE_API ATopDownNewCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATopDownNewCharacter();

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
		Category = "Pangaea | PlayerCharacter",
		meta = (DisplayName = "Get HP"))
	int GetHealthPoints();

	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	bool IsKilled();

	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	bool CanAttack();

	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	void Attack();

	
	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	void Hit(int damage);


	UFUNCTION(BlueprintCallable,
		Category = "Pangaea | PlayerCharacter")
	void DieProcess();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// 여기에 protected 블록 있음

	// protected 블록 종료
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera",
		meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* _springArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera",
		meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* _cameraComponent;

	FORCEINLINE USpringArmComponent* GetCameraBoom() const
	{
		return _springArmComponent;
	}


	FORCEINLINE UCameraComponent* GetCamera() const
	{
		return _cameraComponent;
	}
};

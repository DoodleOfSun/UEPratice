// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownNewCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NewAnimInstance.h"

// Sets default values
ATopDownNewCharacter::ATopDownNewCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// 카메라 스프링 암 생성
	_springArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	_springArmComponent->SetupAttachment(RootComponent);
	_springArmComponent->SetUsingAbsoluteRotation(true);
	_springArmComponent->TargetArmLength = 800.0f;
	_springArmComponent->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));
	_springArmComponent->bDoCollisionTest = false;

	// 카메라 컴포넌트 생성
	_cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	_cameraComponent->SetupAttachment(_springArmComponent, USpringArmComponent::SocketName);
	_cameraComponent->bUsePawnControlRotation = false;

	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	auto charactorMovement = GetCharacterMovement();
	charactorMovement->bOrientRotationToMovement = true;
	charactorMovement->RotationRate = FRotator(0.0f, 640.0f, 0.0f);
	charactorMovement->bConstrainToPlane = true;
	charactorMovement->bSnapToPlaneAtStart = true;
}

// Called when the game starts or when spawned
void ATopDownNewCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATopDownNewCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UNewAnimInstance* animInst = Cast<UNewAnimInstance>(GetMesh()->GetAnimInstance());
	animInst->Speed = GetCharacterMovement()->Velocity.Size2D();

	if (_AttackCountingDown == AttackInterval)
	{
		animInst->state = EPlayerState::Attack;
	}
	
	if (_AttackCountingDown > 0.0f)
	{
		_AttackCountingDown -= DeltaTime;
	}
}

// Called to bind functionality to input
void ATopDownNewCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

int ATopDownNewCharacter::GetHealthPoints()
{
	return _HealthPoints;
}

bool ATopDownNewCharacter::IsKilled()
{
	return (_HealthPoints <= 0.0f);
}

bool ATopDownNewCharacter::CanAttack()
{
	UNewAnimInstance* animInst = Cast<UNewAnimInstance>(GetMesh()->GetAnimInstance());
	return (_AttackCountingDown <= 0.0f && animInst->state == EPlayerState::Locomotion);
}

void ATopDownNewCharacter::Attack()
{
	_AttackCountingDown = AttackInterval;
}

void ATopDownNewCharacter::DieProcess()
{
	Destroy();
}
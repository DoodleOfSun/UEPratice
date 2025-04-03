// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEPRATICEPickUpComponent.h"

UUEPRATICEPickUpComponent::UUEPRATICEPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UUEPRATICEPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UUEPRATICEPickUpComponent::OnSphereBeginOverlap);
}

void UUEPRATICEPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AUEPRATICECharacter* Character = Cast<AUEPRATICECharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}

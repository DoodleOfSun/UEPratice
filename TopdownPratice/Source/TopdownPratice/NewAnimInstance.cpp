// Fill out your copyright notice in the Description page of Project Settings.


#include "NewAnimInstance.h"
#include "TopDownNewCharacter.h"


void UNewAnimInstance::OnStateAnimationEnds()
{
	if (state == EPlayerState::Attack)
	{
		state = EPlayerState::Locomotion;
	}
	else
	{
		auto ownerActor = this->GetOwningActor();
		auto playerAvatar = 
			Cast<ATopDownNewCharacter>(ownerActor);
		if (playerAvatar == nullptr) 
		{
			return;
		}
		if (state == EPlayerState::Hit) 
		{
			
			if (playerAvatar->GetHealthPoints() > 0.0f) 
			{
				state = EPlayerState::Locomotion;
			}
			else
			{
				state = EPlayerState::Die;
			}
		}
		else if (state == EPlayerState::Die)
		{

		}
	}
}
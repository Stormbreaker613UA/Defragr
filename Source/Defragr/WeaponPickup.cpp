/* Copyright (C) Terence-Lee 'Zinglish' Davis
 * Written by Terence-Lee 'Zinglish' Davis <zinglish[at]gmail.com>
 */

#include "Defragr.h"

#include "Engine.h"

#include "DefragrPlayer.h"

#include "WeaponPickup.h"


void AWeaponPickup::OnPlayerPickup(ADefragrPlayer* Player)
{
	Super::OnPlayerPickup(Player);

	if(IsActive)
	{
		Player->PickupWeapon(Weapon);
		IsActive = false;
	}
}

void AWeaponPickup::OnPickedUp_Implementation()
{
	Super::OnPickedUp_Implementation();

	Destroy();
}


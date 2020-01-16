#include "Engine.h"

/*bool Engine::detectCollisions(PlayableCharacter& character)
{
	// Collision detection
		// Have any zombies been shot?
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < numZombies; j++)
		{
			if (bullets[i].isInFlight() &&
				zombies[j].isAlive())
			{
				if (bullets[i].getPosition().intersects
				(zombies[j].getPosition()))
				{
					// Stop the bullet
					bullets[i].stop();

					// Register the hit and see if it was a kill
					if (zombies[j].hit()) {
						// Not just a hit but a kill too

						// Updated: Increased the score by 10 additional points
						score += 20;
						if (score >= hiScore)
						{
							hiScore = score;
						}

						numZombiesAlive--;

						// When all the zombies are dead (again)
						if (numZombiesAlive == 0) {
							//Updated: Gave the player additional pionts when the zombies are all dead
							score += 250;
							state = State::LEVELING_UP;
						}
					}

					// Make a splat sound
					splat.play();

				}
			}

		}
	}// End zombie being shot

	// Have any zombies touched the player			
	for (int i = 0; i < numZombies; i++)
	{
		if (player.getPosition().intersects
		(zombies[i].getPosition()) && zombies[i].isAlive())
		{

			if (player.hit(gameTimeTotal))
			{

				hit.play();
			}

			if (player.getHealth() <= 0)
			{
				state = State::GAME_OVER;

				ofstream outputFile("gamedata/scores.txt");
				outputFile << hiScore;
				outputFile.close();

			}
		}
	}// End player touched

	// Has the player touched health pickup
	if (player.getPosition().intersects
	(healthPickup.getPosition()) && healthPickup.isSpawned())
	{
		player.increaseHealthLevel(healthPickup.gotIt());
		// Play a sound
		pickup.play();

	}

	// Has the player touched ammo pickup
	if (player.getPosition().intersects
	(ammoPickup.getPosition()) && ammoPickup.isSpawned())
	{
		bulletsSpare += ammoPickup.gotIt();
		// Play a sound
		reload.play();

	}

	// Has the player touched ammo pickup
	if (player.getPosition().intersects
	(ammoCrate.getPosition()) && ammoCrate.isSpawned())
	{
		bulletsSpare += ammoCrate.gotIt();
		// Play a sound
		reload.play();

	}

	// Has the player touched ammo pickup
	if (player.getPosition().intersects
	(manic.getPosition()) && manic.isSpawned())
	{
		bulletsSpare += manic.gotIt();
		currentBullet = 0;
		bulletsSpare = 100;
		bulletsInClip = 100;
		clipSize = 100;
		fireRate = 5.5;
		// Play a sound
		reload.play();

	}

	// Has the player touched ammo pickup
	if (player.getPosition().intersects
	(runner.getPosition()) && runner.isSpawned())
	{
		player.m_Speed = 350;
		runner.gotIt();
		// Play a sound
		//reload.play();

	}
}*/
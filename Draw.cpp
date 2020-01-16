
#include "Engine.h"
#include "Pickup.h"

//void Engine::draw()
/*{
	/*if (state == State::PLAYING)
	{
		window.clear();

		// set the mainView to be displayed in the window
		// And draw everything related to it
		window.setView(mainView);

		// Draw the background
		window.draw(background, &textureBackground);

		// Draw the zombies
		for (int i = 0; i < numZombies; i++)
		{
			window.draw(zombies[i].getSprite());
		}

		for (int i = 0; i < 100; i++)
		{
			if (bullets[i].isInFlight())
			{
				window.draw(bullets[i].getShape());
			}
		}

		// Draw the player
		window.draw(player.getSprite());

		// Draw the pickups is currently spawned
		if (ammoPickup.isSpawned())
		{
			window.draw(ammoPickup.getSprite());
		}
		if (healthPickup.isSpawned())
		{
			window.draw(healthPickup.getSprite());
		}
		// Updated: Draws in the new sprite to give the player a crate of ammo
		if (ammoCrate.isSpawned())
		{
			window.draw(ammoCrate.getSprite());
		}

		// Updated: Draws in the new sprite to give the player a crate of ammo
		if (runner.isSpawned())
		{
			window.draw(runner.getSprite());
		}


		// Updated: Draws in the new sprite to give the player a crate of ammo
		if (manic.isSpawned())
		{
			window.draw(manic.getSprite());
		}

		//Draw the crosshair
		window.draw(spriteCrosshair);

		// Switch to the HUD view
		window.setView(hudView);

		// Draw all the HUD elements
		window.draw(spriteAmmoIcon);
		window.draw(ammoText);
		window.draw(scoreText);
		window.draw(hiScoreText);
		window.draw(healthBar);
		window.draw(waveNumberText);
		window.draw(zombiesRemainingText);
		window.draw(healthText);
		window.draw(KNumberText);
	}

	if (state == State::LEVELING_UP)
	{
		window.draw(spriteGameOver);
		window.draw(AssignmentText);
		window.draw(levelUpText);
	}

	if (state == State::PAUSED)
	{
		window.draw(pausedText);
	}

	if (state == State::GAME_OVER)
	{
		window.draw(spriteGameOver);
		window.draw(gameOverText);
		window.draw(scoreText);
		window.draw(hiScoreText);
	}

	window.display();
	
	
}*/
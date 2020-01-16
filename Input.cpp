//#include "stdafx.h"
#include "Engine.h"

void Engine::input()
{
	/*Event event;
	while (m_Window.pollEvent(event))
	{
		if (event.type == Event::KeyPressed)
		{
			

			// Handle the player quitting
			if (Keyboard::isKeyPressed(Keyboard::Escape))
			{
				m_Window.close();
			}

			// Handle the player starting the game
			if (Keyboard::isKeyPressed(Keyboard::Return))
			{
				m_Playing = true;
			}

			// Switch between Thomas and Bob
			if (Keyboard::isKeyPressed(Keyboard::Q))
			{
				m_Character1 = !m_Character1;
			}

			// Switch between full and split-screen
			if (Keyboard::isKeyPressed(Keyboard::E))
			{
				m_SplitScreen = !m_SplitScreen;
			}
		}
	}	

	// Handle input specific to Thomas
	if (m_Thomas.handleInput())
	{
		// Play a jump sound
		m_SM.playJump();
	}

	// Handle input specific to Bob
	if (m_Bob.handleInput())
	{
		// Play a jump sound
		m_SM.playJump();
	}

	// Handle events
	Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::KeyPressed)
		{
			// Pause a game while playing
			if (event.key.code == Keyboard::Return &&
				state == State::PLAYING)
			{
				state = State::PAUSED;
			}

			// Restart while paused
			else if (event.key.code == Keyboard::Return &&
				state == State::PAUSED)
			{
				state = State::PLAYING;
				// Reset the clock so there isn't a frame jump
				clock.restart();
			}

			// Start a new game while in GAME_OVER state
			else if (event.key.code == Keyboard::Return &&
				state == State::GAME_OVER)
			{
				state = State::LEVELING_UP;
				wave = 0;		//Updated: wave increases each time new game
				score = 0;


				//Updated: Changed the inital ammo capacity, clip size, bullets in the clip and rate of fire * 3.5

				// Prepare the gun and ammo for next game
				currentBullet = 0;
				bulletsSpare = 56;
				bulletsInClip = 8;
				clipSize = 8;
				fireRate = 1 * 3.5;

				// Reset the player's stats
				player.resetPlayerStats();
			}

			if (state == State::PLAYING)
			{
				// Reloading
				if (event.key.code == Keyboard::R)
				{
					if (bulletsSpare >= clipSize)
					{
						// Plenty of bullets. Reload.
						bulletsInClip = clipSize;
						bulletsSpare -= clipSize;
						reload.play();
					}
					else if (bulletsSpare > 0)
					{
						// Only few bullets left
						bulletsInClip = bulletsSpare;
						bulletsSpare = 0;
						reload.play();
					}
					else
					{
						clipSize >= bulletsInClip;
						reloadFailed.play();
					}

				}
			}

		}
	}// End event polling

	// Fire a bullet
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{

		//Updated: Made the reaction time quicker for each mouse pressed, making each bullet quicker to be shot
		if (gameTimeTotal.asMilliseconds()
			- lastPressed.asMilliseconds()
					> 550 / fireRate && bulletsInClip > 0)
		{

			// Pass the centre of the player and the centre of the crosshair
			// to the shoot function
			bullets[currentBullet].shoot(
				player.getCenter().x, player.getCenter().y,
				mouseWorldPosition.x, mouseWorldPosition.y);

			currentBullet++;
			if (currentBullet > 99)
			{
				currentBullet = 0;
			}
			lastPressed = gameTimeTotal;
			shoot.play();
			bulletsInClip--;
		}

	}// End fire a bullet


	 // Handle the player quitting
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		window.close();
	}

	// Handle controls while playing
	if (state == State::PLAYING)
	{
		// Handle the pressing and releasing of the WASD keys
		if (Keyboard::isKeyPressed(Keyboard::W))
		{
			player.moveUp();
		}
		else
		{
			player.stopUp();
		}

		if (Keyboard::isKeyPressed(Keyboard::S))
		{
			player.moveDown();
		}
		else
		{
			player.stopDown();
		}

		if (Keyboard::isKeyPressed(Keyboard::A))
		{
			player.moveLeft();
		}
		else
		{
			player.stopLeft();
		}

		if (Keyboard::isKeyPressed(Keyboard::D))
		{
			player.moveRight();
		}
		else
		{
			player.stopRight();
		}*/
}
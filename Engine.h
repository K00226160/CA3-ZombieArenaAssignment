#pragma once
#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "LevelManager.h"
#include "SoundManager.h"
#include "Bullet.h"
#include "Player.h"
#include "HUD.h"
#include "Zombie.h"
#include "Pickup.h"

using namespace sf;

class Engine
{

private:

	// Here is the instabce of TextureHolder
	TextureHolder holder;

	// The game will always be in one of four states

	enum class State { PAUSED, LEVELING_UP, GAME_OVER, PLAYING };
	

	State state;

	View mainView;

	Texture textureBackground;

	// Get the screen resolution and create an SFML window
	Vector2f resolution;
	
	RenderWindow window;

	// Here is our clock for timing everything
	Clock clock;
	// How long has the PLAYING state been active
	Time gameTimeTotal;

	// Where is the mouse in relation to world coordinates
	Vector2f mouseWorldPosition;
	// Where is the mouse in relation to screen coordinates
	Vector2i mouseScreenPosition;

	// Create an instance of the Player class
	Player player;

	// The boundaries of the arena
	IntRect arena;

	// Prepare for a horde of zombies
	int numZombies;
	int numZombiesAlive;
	Zombie* zombies = NULL;

	// Create the background
	VertexArray background;

	void draw();
	void update(float dtAsSeconds);
	void input();
	
public:
	// 100 bullets should do
	Bullet bullets[1010];
	int currentBullet = 0;
	int bulletsSpare = 48;
	int bulletsInClip = 8;
	int clipSize = 8;
	float fireRate = 5;

	void run();


};

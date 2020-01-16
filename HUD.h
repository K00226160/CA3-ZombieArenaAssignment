#pragma once
#include <SFML/Graphics.hpp>
#include <sstream>
#include <fstream>
using namespace std;
using namespace sf;

class Hud
{
private:

	Font font;

public:
	// About the game
	int score = 0;
	int hiScore = 0;
	
	Hud();

};

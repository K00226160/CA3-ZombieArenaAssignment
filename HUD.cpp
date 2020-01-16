//#include "stdafx.h"
#include "Hud.h"

/*Hud::Hud()
{
	Vector2u resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	// Load the font
	m_Font.loadFromFile("fonts/Enchanted Land.ttf");

	// Paused
	m_StartText.setFont(m_Font);
	m_StartText.setCharacterSize(100);
	m_StartText.setFillColor(Color::White);
	m_StartText.setString("Press Enter when ready!");
	*/

	/*font.loadFromFile("fonts/zombiecontrol.ttf");

	// Paused
	Text pausedText;
	pausedText.setFont(font);
	pausedText.setCharacterSize(155);
	pausedText.setFillColor(Color::Yellow);	// Updated: changed the colour to yellow
	pausedText.setPosition(535, 395);         //Updated: changed the position to be more centered
	pausedText.setString("Press Enter  \nto continue");

	//Asignment Text
	Text AssignmentText;
	AssignmentText.setFont(font);
	AssignmentText.setCharacterSize(55);
	AssignmentText.setFillColor(Color::Green);		//Updated: changed the colour, so it would be green as zombie blood
	AssignmentText.setPosition(425, 60);	// Updated: Alligned the text in center top of screen, so text is sticking out to user's face
	AssignmentText.setString("CA 3 - Zombie Improvement Assignment");


	// Game Over
	Text gameOverText;
	gameOverText.setFont(font);
	gameOverText.setCharacterSize(125);
	gameOverText.setFillColor(Color::Green);		//Updated: changed the colour, so it would be green as zombie blood
	gameOverText.setPosition(400, 400);	// Updated: Alligned the text in center of screen, so text is sticking out to user's face
	gameOverText.setString("Press Enter to play");

	// Levelling up
	Text levelUpText;
	levelUpText.setFont(font);
	levelUpText.setCharacterSize(80);
	levelUpText.setFillColor(Color::Green); //Updated: changed the colour, so it would be green as zombie blood
	levelUpText.setPosition(150, 250);
	std::stringstream levelUpStream;
	levelUpStream <<
		"1- Increased rate of fire" <<
		"\n2- Increased clip size(next reload)" <<
		"\n3- Increased max health" <<
		"\n4- Increased run speed" <<
		"\n5- More and better health pickups" <<
		"\n6- More and better ammo pickups" <<
		"\n7- Death Mode (Hard Difficulty)";  //Updated: New text for the player to choose
	levelUpText.setString(levelUpStream.str());

	// Ammo
	Text ammoText;
	ammoText.setFont(font);
	ammoText.setCharacterSize(55);
	ammoText.setFillColor(Color::Red); // Updated: Changed the colour of the ammo text to red
	ammoText.setPosition(200, 980);

	// Score
	Text scoreText;
	scoreText.setFont(font);
	scoreText.setCharacterSize(55);
	scoreText.setFillColor(Color::Magenta); // Updated: Changed the colour of the ammo, because i can
	scoreText.setPosition(20, 0);

	// Health
	Text healthText;             //Updated: Added in the health text to identify the health bar
	healthText.setFont(font);
	healthText.setCharacterSize(55);
	healthText.setFillColor(Color::Blue); // Updated: Changed the colour of the ammo, because i can
	healthText.setPosition(1000, 980);
	healthText.setString(": Health");

	// Load the high score from a text file/
	std::ifstream inputFile("gamedata/scores.txt");
	if (inputFile.is_open())
	{
		inputFile >> hiScore;
		inputFile.close();
	}

	// Hi Score
	Text hiScoreText;
	hiScoreText.setFont(font);
	hiScoreText.setCharacterSize(65);      //Updated: Changed the size of font by 10, little easier to see now
	hiScoreText.setFillColor(Color::Green);		//Updated: changed the colour, so it would be green as zombie blood
	hiScoreText.setPosition(1400, 0);
	stringstream s;
	s << "Hi Score:" << hiScore;
	hiScoreText.setString(s.str());

	// Zombies remaining
	Text zombiesRemainingText;
	zombiesRemainingText.setFont(font);
	zombiesRemainingText.setCharacterSize(55);
	zombiesRemainingText.setFillColor(Color::White);
	zombiesRemainingText.setPosition(1500, 980);
	zombiesRemainingText.setString("Zombies: 100");

	// KNumber
	Text KNumberText;			// Updated: KNumber added
	KNumberText.setFont(font);
	KNumberText.setCharacterSize(25);
	KNumberText.setFillColor(Color::White);
	KNumberText.setPosition(1420, 905);
	KNumberText.setString("Zombie Game by John Horton \n Modified by: K00226160");

	// Wave number
	int wave = 0;
	Text waveNumberText;
	waveNumberText.setFont(font);
	waveNumberText.setCharacterSize(55);
	waveNumberText.setFillColor(Color::White);
	waveNumberText.setPosition(1280, 980);   // Updated: Changed the poistioning of the wave number to make room K Number and Health
	waveNumberText.setString("Wave: 0");

	// Health bar
	RectangleShape healthBar;
	//Updated: Changed the colour of the health to blue
	healthBar.setFillColor(Color::Blue);
	healthBar.setPosition(450, 980);
}
/*
Text Hud::getMessage()
{
	return m_StartText;
}

Text Hud::getLevel()
{
	return m_LevelText;
}

Text Hud::getTime()
{
	return m_TimeText;
}

void Hud::setLevel(String text)
{
	m_LevelText.setString(text);
}

void Hud::setTime(String text)
{
	m_TimeText.setString(text);
}*/
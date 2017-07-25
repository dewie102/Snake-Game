#pragma once
#include "Gameboard.h"
#include "Snake.h"
#include "SharedContext.h"
#include <string>

class GameManager {
public:
	GameManager (sf::Vector2u WindowSize, std::string WindowName);
	~GameManager ();

	void Initialize ();
	void EndGame ();
	void Restart ();

private:
	Gameboard board;
	Snake snake;
	sf::Vector2u windowSize;
	std::string windowName;

	void CreateWindow (sf::Vector2u WindowSize, std::string WindowName);
};


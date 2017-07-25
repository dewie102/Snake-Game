#pragma once
#include "GameManager.h"

struct SharedContext {
	sf::RenderWindow* m_wind;
	Gameboard* m_gameBoard;

	SharedContext () : m_wind (nullptr), m_gameBoard (nullptr) {}
};
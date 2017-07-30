#pragma once
#include "Gameboard.h"
#include "Snake.h"
#include "SharedContext.h"
#include "Window.h"
#include <iostream>

class GameManager {
public:
	GameManager ();
	~GameManager ();

	void Update ();
	void LateUpdate ();
	void Render ();

	sf::Time GetElapsed ();

	Window* GetWindow ();

private:
	sf::Clock m_clock;
	sf::Time m_elapsed;
	Snake m_snake;
	SharedContext m_context;
	Window m_window;

	void RestartClock ();
};


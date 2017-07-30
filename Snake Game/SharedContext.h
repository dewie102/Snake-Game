#pragma once
#include "Window.h"

class Gameboard;
struct SharedContext {
	Window* m_wind;
	Gameboard* m_gameBoard;

	SharedContext ():
		m_wind(nullptr), m_gameBoard(nullptr) {}
};
#pragma once
#include <SFML/Graphics.hpp>

class Gameboard {
public:
	Gameboard ();
	~Gameboard ();

	void CreateGameboard ();
	void DrawGameboard (sf::RenderWindow window);

private:
	sf::Vector2i m_gameboardSize;
	sf::Int32 m_tileSize;
};


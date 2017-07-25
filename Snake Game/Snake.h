#pragma once
#include <SFML/Graphics.hpp>
#include <list>


class Snake {
public:
	Snake ();
	~Snake ();

	void AddSegment (sf::Vector2i Position);

	void DrawSnake ();

private:
	sf::Vector2i headPosition;
	int size;
	std::list<sf::Vector2i> body;
};


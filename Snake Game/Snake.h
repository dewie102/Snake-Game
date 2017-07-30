#pragma once
#include <SFML/Graphics.hpp>
#include <list>


class Snake {
public:
	Snake ();
	~Snake ();

	void AddSegment (sf::Vector2i Position);

private:
	sf::Vector2i m_headPosition;
	int m_size;
	std::list<sf::Vector2i> m_body;
};


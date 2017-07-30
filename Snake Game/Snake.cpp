#include "Snake.h"

Snake::Snake () {
	m_size = 3;
	AddSegment (sf::Vector2i (5, 5));
	AddSegment (sf::Vector2i (5, 4));
	AddSegment (sf::Vector2i (5, 3));
	m_headPosition = m_body.front ();
}

Snake::~Snake () {
	m_body.clear ();
}

void Snake::AddSegment (sf::Vector2i Position) {
	m_body.push_back (Position);
}
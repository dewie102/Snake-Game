#include "Snake.h"

Snake::Snake () {
	size = 3;
	AddSegment (sf::Vector2i (5, 5));
	AddSegment (sf::Vector2i (5, 4));
	AddSegment (sf::Vector2i (5, 3));
	headPosition = body.front ();
}

Snake::~Snake () {
	body.clear ();
}

void Snake::AddSegment (sf::Vector2i Position) {
	body.push_back (Position);
}

void Snake::DrawSnake () {

}
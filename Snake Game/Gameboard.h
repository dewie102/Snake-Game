#pragma once
#include "SharedContext.h"
#include <unordered_map>

enum TileType {NONE = 0, HEAD = 1, BODY = 2, TAIL = 3, FRUIT = 4};

class Gameboard {
public:
	Gameboard (SharedContext& l_context, sf::Vector2u l_mapSize, sf::Int32 l_tileSize);
	~Gameboard ();

	void CreateGameboard ();
	void DrawGameboard (Window* l_window);

	int GetTile (sf::Vector2u& l_position);

private:
	sf::Vector2u m_gameboardSize;
	sf::Int32 m_tileSize;
	std::unordered_map < std::pair<int, int>, TileType> m_map;
	SharedContext* m_context;
};


#include "GameBoard.h"

Gameboard::Gameboard (SharedContext& l_context, sf::Vector2u l_mapSize, sf::Int32 l_tileSize) {
	m_gameboardSize = l_mapSize;
	m_tileSize = l_tileSize;
	CreateGameboard ();
}

Gameboard::~Gameboard () {

}

void Gameboard::CreateGameboard () {
	for (int x = 0; x < m_gameboardSize.x; x++) {
		for (int y = 0; y < m_gameboardSize.y; y++) {
			m_map.emplace (std::pair<int, int>(x, y), TileType::NONE);
		}
	}
}

void Gameboard::DrawGameboard (Window* l_window) {
	for (auto& it = m_map.begin (); it != m_map.end (); ++it) {
		TileType tile = it->second;
		sf::RectangleShape tempTile (sf::Vector2f (m_tileSize - 2, m_tileSize - 2));

		switch (tile) {
		case 0:
			tempTile.setFillColor (sf::Color::Green);
			tempTile.setPosition (sf::Vector2f(it->first.first, it->first.second));
			l_window->Draw (tempTile);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		}
	}
}

int Gameboard::GetTile (sf::Vector2u& l_position) {
	if (l_position.x >= 0 && l_position.x < m_gameboardSize.x && l_position.y >= 0 && l_position.y < m_gameboardSize.y) {
		return m_map.find (l_position)->second;
	}
}
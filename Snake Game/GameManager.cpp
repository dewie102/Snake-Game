#include "GameManager.h"

GameManager::GameManager (sf::Vector2u WindowSize, std::string WindowName) {
	windowSize = WindowSize;
	windowName = WindowName;
	Initialize ();
}

GameManager::~GameManager () {
	
}

void GameManager::Initialize () {
	CreateWindow (windowSize, windowName);
}

void GameManager::EndGame () {

}

void GameManager::Restart () {

}

void GameManager::CreateWindow (sf::Vector2u WindowSize, std::string WindowName) {
	m_wind->create(sf::VideoMode(WindowSize.x, WindowSize.y), WindowName);
}
#include "GameManager.h"

GameManager::GameManager () : m_window("Snake", sf::Vector2u(800, 608)) {
	m_clock.restart ();
	srand ((unsigned int)time (nullptr));
	Gameboard board = Gameboard(m_context, m_window.GetWindowSize (), 32);
	m_context.m_gameBoard = &board;
	m_context.m_wind = &m_window;
}

GameManager::~GameManager () {}

void GameManager::Update () {
	m_window.Update ();
}

void GameManager::LateUpdate () {

}

void GameManager::Render () {
	m_window.BeginDraw ();
	// Render here
	m_context.m_gameBoard->DrawGameboard (m_context.m_wind);
	m_window.EndDraw ();
}

sf::Time GameManager::GetElapsed () {
	return m_clock.getElapsedTime ();
}

Window* GameManager::GetWindow () {
	return &m_window;
}

void GameManager::RestartClock () {
	m_elapsed = m_clock.restart ();
}
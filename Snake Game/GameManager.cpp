#include "GameManager.h"

GameManager::GameManager () : m_window("Snake", sf::Vector2u(800, 600)) {
	m_clock.restart ();
	srand ((unsigned int)time (nullptr));
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
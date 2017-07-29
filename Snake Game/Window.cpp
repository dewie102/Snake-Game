#include "Window.h"

Window::Window () {
	Setup ("Window", sf::Vector2u (640, 480));
}

Window::Window (const std::string& l_title, const sf::Vector2u& l_size) {
	Setup (l_title, l_size);
}

Window::~Window () {
	m_window.close ();
}

void Window::BeginDraw () {
	m_window.clear (sf::Color::Black);
}

void Window::EndDraw () {
	m_window.display ();
}

void Window::Update () {
	sf::Event event;
	while (m_window.pollEvent (event)) {
		if (event.type == sf::Event::Closed) {
			Close ();
		}
	}
}

bool Window::IsDone () {
	return m_isDone;
}

sf::Vector2u Window::GetWindowSize () {
	return m_windowSize;
}

sf::RenderWindow* Window::GetRenderWindow () {
	return &m_window;
}

void Window::Close () {
	m_isDone = true;
}

void Window::Draw (sf::Drawable& l_drawable) {
	m_window.draw (l_drawable);
}

void Window::Setup (const std::string& l_title, const sf::Vector2u& l_size) {
	m_windowTitle = l_title;
	m_windowSize = l_size;
	m_isDone = false;

	Create ();
}

void Window::Create () {
	m_window.create (sf::VideoMode(m_windowSize.x, m_windowSize.y), m_windowTitle);
}

void Window::Destroy () {
	m_window.close ();
}
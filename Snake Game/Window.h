#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Window {
public:
	Window ();
	Window (const std::string& l_title, const sf::Vector2u& l_size);
	~Window ();

	void BeginDraw (); // Clear the window
	void EndDraw (); // Display the changes

	void Update ();

	bool IsDone ();
	sf::Vector2u GetWindowSize ();
	sf::RenderWindow* GetRenderWindow ();

	void Close ();

	void Draw (sf::Drawable& l_drawable);
private:
	sf::RenderWindow m_window;
	sf::Vector2u m_windowSize;
	std::string m_windowTitle;
	bool m_isDone;

	void Setup (const std::string& l_title, const sf::Vector2u& l_size);
	void Create ();
	void Destroy ();
};
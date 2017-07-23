#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main () {
	sf::RenderWindow window (sf::VideoMode (200, 200), "SFML works!");
	sf::RectangleShape shape (sf::Vector2f (100, 100));
	shape.setOrigin (50, 50);
	shape.setPosition (100, 100);
	shape.setFillColor (sf::Color::Green);

	while (window.isOpen ()) {
		sf::Event event;
		while (window.pollEvent (event)) {
			if (event.type == sf::Event::Closed)
				window.close ();
		}

		window.clear ();
		window.draw (shape);
		window.display ();
	}

	return 0;
}
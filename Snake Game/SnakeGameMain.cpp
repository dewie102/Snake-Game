#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main () {
	sf::RenderWindow window;

	while (window.isOpen ()) {
		sf::Event event;
		while (window.pollEvent (event)) {
			if (event.type == sf::Event::Closed)
				window.close ();
		}

		window.clear ();

		window.display ();
	}

	return 0;
}
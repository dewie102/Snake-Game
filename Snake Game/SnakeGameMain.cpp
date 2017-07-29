#include "GameManager.h"

int main () {
	GameManager game;
	while (!game.GetWindow ()->IsDone ()) {
		game.Update ();
		game.Render ();
		game.LateUpdate ();
	}

	return 0;
}
#include "snake_game.h"

// _getch() value of ESC key
#define ESC 27

void snake_game(void) {
	system("cls");

	int x = 100, y = 20;
	char key;

	do {
		gotoxy(x, y);
		printf("SNAKE GAME");
		key = _getch();
	} while (key != ESC);
}
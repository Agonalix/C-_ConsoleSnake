#include "gameLoop.h"

void gameStart();
void gameLoop(Scenes& scene);


static Scenes scene = Scenes::menu;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
bool gameover;

void runGame()
{
	gameStart();
}

void gameStart()
{
	while (scene != Scenes::exit)
	{
		switch (scene)
		{
		case Scenes::menu:
			menu(scene);
			break;
		case Scenes::game:
			gameLoop(scene);
			break;
		case Scenes::credits:
			credits(scene);
			break;
		case Scenes::rules:
			rules(scene);
			break;
		case Scenes::exit:
			exit(NULL);
			break;
		}
	}
}
void gameLoop(Scenes& scene)
{
	while (scene == Scenes::game && scene != Scenes::exit)
	{

	}
}
void init()
{
	gameover = false;

	const int width = 20;
	const int height = 20;

	int centerX = width / 2;
	int centerY = height / 2;

	int fruitX = rand() % width;
	int fruitY = rand() % height;

	int tailX[20];
	int tailY[20];
	int nTail;

	int score = 0;
}
void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameover = true;
			break;
		}
	}
}
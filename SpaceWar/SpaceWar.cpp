#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

bool window_is_open = true;
COORD coord;

class Game {
public:
	void map();
	void StartGame();
	void Player();
	void Enemy();
	void Position(int x, int y);
};

Game obj;

void Game::map()
{
	const int height = 20;
	const int weight = 40;
	char Arr[height][weight];
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weight; j++)
		{
			if ((i == 0) || (j == 0) || (i == height - 1) || (j == weight - 1))
			{
				Arr[i][j] = '*';
				cout << Arr[i][j];
			}
			else {
				Arr[i][j] = ' ';
				cout << Arr[i][j];
			}
		}
		cout << endl;
	}
}

void Game::StartGame()
{
	system("cls");
	obj.map();
	while (true)
	{
		
	}
}

void Game::Player()
{

}

void Game::Enemy()
{

}

void Game::Position(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void menu()
{
	short int choice;
	system("cls");
	cout << "1.Начать игру" << endl;
	cout << "2.Выйти" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		obj.StartGame();
		break;
	case 2:
		window_is_open = false;
		break;
	default:
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	while (window_is_open == true)
	{
		menu();
	}
	return 0;
}
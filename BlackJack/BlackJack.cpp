#include <iostream>
#include "Game.h"
#include <typeinfo>

int main()
{   
	setlocale(LC_ALL, "rus");
	int numPlayers = 0;
	while (numPlayers < 1 || numPlayers > 7)
	{
		std::cout << "Сколько игроков? (1 - 7): ";
		std::cin >> numPlayers;
	}

	std::vector<std::string> names;
	std::string name;
	for (int i = 0; i < numPlayers; ++i) {
		std::cout << "Введите имя игрока №" << i+1 <<": ";
		std::cin >> name;
		names.push_back(name);
	}
	std::cout << std::endl;

	// игровой цикл
	Game aGame(names);
	char again = 'y';
	do {
		aGame.Play();
		std::cout << "Do you want to play again? (Y/N): ";
		std::cin >> again;
	} while (again != 'n' && again != 'N');
    return 0;
}
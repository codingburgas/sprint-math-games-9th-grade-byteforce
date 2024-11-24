#include "menu.h"
#include "crosswordEasy1.h"
#include "crosswordMedium1.h"
#include "crosswordHard1.h"
#include "rules.h"

void chooseLevel()
{
	string LIGHTAQUA = "\033[38;2;173;216;230m";
	int choice = 0;
	cout << LIGHTAQUA << "Levels" << endl;
	cout << LIGHTAQUA << "1. Easy" << endl;
	cout << LIGHTAQUA << "2. Medium" << endl;
	cout << LIGHTAQUA << "3. Hard" << endl;
	cout << "Choose level: ";
	cin >> choice;
	switch (choice)
	{
	case 1: crossowrdEasy1();
	case 2: crosswordMedium1();
	case 3: crosswordHard1();
	}

}

void showRules()
{
	string LIGHTAQUA = "\033[38;2;173;216;230m";
	cout << setw(40) << LIGHTAQUA << "+----------+----------+----------+----------+----------+----------+" << endl;
	cout << setw(40) << LIGHTAQUA << "|-----------------------------------------------------------------|" << endl;
	cout << setw(40) << LIGHTAQUA << "|                      How to play the game?                      |" << endl;
	cout << setw(40) << LIGHTAQUA << "|                                                                 |" << endl;
	cout << setw(40) << LIGHTAQUA << "|                 Crossowrd is a word puzzle game.                |" << endl;
	cout << setw(40) << LIGHTAQUA << "|               The rules of the game are very simple.            |" << endl;
	cout << setw(40) << LIGHTAQUA << "|      The words are numbered and there are short definitions     | " << endl;
	cout << setw(40) << LIGHTAQUA << "|  corresponding to the number of the words. You have to fill in  |" << endl;
	cout << setw(40) << LIGHTAQUA << "|  the word by placing one letter in each square of the crossowrd |" << endl;
	cout << setw(40) << LIGHTAQUA << "|  You have to know to know the definiion of the words in order   |" << endl;
	cout << setw(40) << LIGHTAQUA << "|     to complete the game. Each level gets harder and harder.    |" << endl;
	cout << setw(40) << LIGHTAQUA << "|                                                                 |" << endl;
	cout << setw(40) << LIGHTAQUA << "|                      Good luck and have fun!                    |" << endl;
	cout << setw(40) << LIGHTAQUA << "|-----------------------------------------------------------------|" << endl;
	cout << setw(40) << LIGHTAQUA << "+----------+----------+----------+----------+----------+----------+" << endl;
}

void menu()
{
	string LIGHTAQUA = "\033[38;2;173;216;230m";
	while (true) { // Loop until the user chooses to quit

		int choice;
		cout << LIGHTAQUA << "1.Play\n 2.How to play the game\n 3.Quit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			chooseLevel();
			break;
		case 2:
			displayRules();
			break;
		case 3:
			cout << LIGHTAQUA << "Thank you for playing!" << endl;
			exit(0);
		}
	}
}
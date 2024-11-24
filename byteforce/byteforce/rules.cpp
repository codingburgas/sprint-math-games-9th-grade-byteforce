#include "rules.h"
#include "menu.h"
void displayRules()
{
	const string LIGHTAQUA = "\033[38;2;173;216;230m";
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

	int answer = 0;
	cout << "If you want to return to the menu press 1" << endl;
	cin >> answer;
	if (answer == 1)
	{
		menu();
	}
}

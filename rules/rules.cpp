#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setw(40) << "+----------+----------+----------+----------+----------+----------+" << endl;
	cout << setw(40) << "|-----------------------------------------------------------------|" << endl;
	cout << setw(40) << "|                      How to play the game?                      |" << endl;
	cout << setw(40) << "|                                                                 |" << endl;
	cout << setw(40) << "|                 Crossowrd is a word puzzle game.                |" << endl;
	cout << setw(40) << "|               The rules of the game are very simple.            |" << endl;
	cout << setw(40) << "|     The words are numbered and there are short definitions      |" << endl;
	cout << setw(40) << "|  corresponding to the number of the words. You have to fill in  |" << endl;
	cout << setw(40) << "|  the word by placing one letter in each square of the crossowrd |" << endl;
	cout << setw(40) << "|  You have to know to know the definiion of the words in order   |" << endl;
	cout << setw(40) << "|     to complete the game. Each level gets harder and harder.    |" << endl;
	cout << setw(40) << "|                                                                 |" << endl;
	cout << setw(40) << "|                      Good luck and have fun!                    |" << endl;
	cout << setw(40) << "|-----------------------------------------------------------------|" << endl;
	cout << setw(40) << "+----------+----------+----------+----------+----------+----------+" << endl;

	cout << endl;
	cout << "<--Back" << endl;

	// Wait for user input to simulate "closing" the Rules menu
	cout << "Press Enter to go back...";
	cin.ignore();

	 system("pause");
}
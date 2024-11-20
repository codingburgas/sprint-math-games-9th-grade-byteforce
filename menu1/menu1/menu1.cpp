#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const string LIGHTAQUA = "\033[38;2;173;216;230m";
void Menu()
{
    int choice;
    cout << LIGHTAQUA << "1.Play\n 2.How to play the game\n 3.Quit\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << LIGHTAQUA << "Levels" << endl;
        cout << LIGHTAQUA << "1.1 Easy" << endl;
        cout << LIGHTAQUA << "1.2 Medium" << endl;
        cout << LIGHTAQUA << "1.3 Hard" << endl;
        break;
    case 2:
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
        break;
    case 3:
        cout << LIGHTAQUA << "Thank you for playing!" << endl;
        return; // Exit the program
    default:
        cout << LIGHTAQUA << "Invalid choice. Please try again." << endl;
        break;
    }
}

int main()
{
    while (true) { // Loop until the user chooses to quit
        Menu();
    }
}
#include "crosswordHard1.h"
#include "menu.h"
#include "crosswordHard2.h"
// Initialize the crossword puzzle with answers and clues
vector<CrosswordEntryHard1> crossword = {
    { "HABITAT", "The natural home or environment of an animal, plant, or other organism.", 1 },
    { "QUADRANGLE", "Four-sided plane figure, especially a square or rectangle.", 2 },
    { "NEGLECT", "The state of being uncared for", 3 },
    { "DEBUG", "To find and fix errors in code.", 4 },
    { "ADVENTURE", "An unusual and exciting or daring experience.", 5 },
    { "ABSENT", "Not present in a place, at an occasion, or as part of something.", 6 },
    { "ADOPT", "Legally take (another's child) and bring it up as one's own.", 7 }
};
// Function to display the crossword layout
void displayCrosswordHard1() {
    string LIGHTAQUA = "\033[38;2;173;216;230m";
    cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 1      |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 2          |   |   |   |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 4                  |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
}
// Function to display clues for the crossword puzzle
void displayCluesHard1() {
    cout << "\nClues:\n";
    for (const auto& entry : crossword) {
        cout << entry.number << ". " << entry.clue << "\n";
    }
}
// Function to check if a guessed word is correct
bool checkGuessHard1(int clueNumber, std::string guess) {
    for (const auto& entry : crossword) {
        if (entry.number == clueNumber) {
            string upperGuess = guess;
            transform(upperGuess.begin(), upperGuess.end(), upperGuess.begin(), ::toupper); // Convert guess to uppercase
            return upperGuess == entry.answer;
        }
    }
    return false;
}
// Function to update the crossword layout with the correct answer
void updateCrosswordHard1(int clueNumber, const std::string answer) {
    string LIGHTAQUA = "\033[38;2;173;216;230m";
    // Replace the '|' characters with the letters of the answer in the appropriate row
    if (clueNumber == 1) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | \n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          |   |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 2) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | H | A | B | I | T | A | T |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " | " << answer[8] << " | " << answer[9] << " | " << answer[10] << "\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 3) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | H | A | B | I | T | A | T |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | Q | U | A | D | R | A | N | G | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 4) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | H | A | B | I | T | A | T |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | Q | U | A | D | R | A | N | G | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | N | E | G | L | E | C | T |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 5) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | H | A | B | I | T | A | T |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | Q | U | A | D | R | A | N | G | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | N | E | G | L | E | C | T |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | D | E | B | U | G |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " | " << answer[8] << " |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 6) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | H | A | B | I | T | A | T |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | Q | U | A | D | R | A | N | G | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | N | E | G | L | E | C | T |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | D | E | B | U | G |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | A | D | V | E | N | T | U | R | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 7) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | H | A | B | I | T | A | T |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | Q | U | A | D | R | A | N | G | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | N | E | G | L | E | C | T |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | D | E | B | U | G |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | A | D | V | E | N | T | U | R | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | A | B | C | E | N | T |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
}
void crosswordHard1() {
    cout << "Welcome to the Interactive Crossword Puzzle!\n";

    // Display the crossword structure
    displayCrosswordHard1();

    // Display the clues
    displayCluesHard1();

    int correctAnswers = 0;
    cin.ignore();
    for (const auto& entry : crossword) {
        string guess;
        cout << "\nEnter your guess for " << entry.number << " Across: ";
        getline(std::cin, guess); // Get user's guess

        if (checkGuessHard1(entry.number, guess)) {
            cout << "Correct!\n";
            correctAnswers++;
            updateCrosswordHard1(entry.number, entry.answer); // Update crossword layout
        }
        else {
            cout << "Incorrect. The correct answer was: " << entry.answer << "\n";
        }
    }

    // Display final score
    cout << "\nYou got " << correctAnswers << " out of " << crossword.size() << " correct!\n";
    if (correctAnswers == crossword.size()) {
        cout << "Congratulations! You completed the crossword!\n";
    }
    else {
        cout << "Better luck next time!\n";
    }
    cout << "Would you like to complete another hard crossword?(y/n): ";
    char answer;
    cin >> answer;
    if (answer == 'y')
    {
        crosswordHard2();
    }
    else if (answer == 'n')
    {
        menu();
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const string LIGHTAQUA = "\033[38;2;173;216;230m";
// Words and clues for the crossword puzzle
struct CrosswordEntry {
    string answer;
    string clue;
    int number;
};

// Initialize the crossword puzzle with answers and clues
vector<CrosswordEntry> crossword = {
    { "VACCINE", "Substance used to stimulate immunity to a particular infectious disease or pathogen", 1 },
    { "WAFERBOARD", "Building panel made from bonded wood flakes, used in construction.", 2 },
    { "ADDRESS", "Description of the location of a person or organization,", 3 },
    { "GLUE", "Substance used for sticking objects or materials together.", 4 },
    { "IMAGINATION","The part of the mind that visualizes things.", 5},
    { "OUTLET", "Many shops at one place that sell for less than the usual price.", 6 },
    { "WALLET", "Item that stores money, credit cards etc.", 7 }
};

// Function to display the crossword layout
void displayCrossword() {
    cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 1      |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 2          |   |   |   |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 4                  |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
}

// Function to display clues for the crossword puzzle
void displayClues() {
    cout << "\nClues:\n";
    for (const auto& entry : crossword) {
        cout << entry.number << ". " << entry.clue << "\n";
    }
}

// Function to check if a guessed word is correct
bool checkGuess(int clueNumber, const std::string& guess) {
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
void updateCrossword(int clueNumber, const std::string& answer) {
    // Replace the '|' characters with the letters of the answer in the appropriate row
    if (clueNumber == 1) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          |   |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
    else if (clueNumber == 2) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | V | A | C | C | I | N | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " | " << answer[8] << " | " << answer[9] << " | " << answer[10] << "\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
    else if (clueNumber == 3) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | V | A | C | C | I | N | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | W | A | F | E | R | B | O | A | R | D |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
    else if (clueNumber == 4) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | V | A | C | C | I | N | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | W | A | F | E | R | B | O | A | R | D |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | A | D | D | R | E | S | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
    else if (clueNumber == 5) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | V | A | C | C | I | N | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | W | A | F | E | R | B | O | A | R | D |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | A | D | D | R | E | S | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | G | L | U | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " | " << answer[8] << " | " << answer[9] << " | " << answer[10] << " |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
    else if (clueNumber == 6) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | V | A | C | C | I | N | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | W | A | F | E | R | B | O | A | R | D |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | A | D | D | R | E | S | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | G | L | U | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | I | M | A | G | I | N | A | T | I | O | N |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
    else if (clueNumber == 7) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | V | A | C | C | I | N | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | W | A | F | E | R | B | O | A | R | D |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | A | D | D | R | E | S | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | G | L | U | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | I | M | A | G | I | N | A | T | I | O | N |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | O | U | T | L | E | T |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+---+\n";
    }
}

int main() {
    cout << "Welcome to the Interactive Crossword Puzzle!\n";

    // Display the crossword structure
    displayCrossword();

    // Display the clues
    displayClues();

    int correctAnswers = 0;
    for (const auto& entry : crossword) {
        string guess;
        cout << "\nEnter your guess for " << entry.number << " Across: ";
        getline(std::cin, guess); // Get user's guess

        if (checkGuess(entry.number, guess)) {
            cout << "Correct!\n";
            correctAnswers++;
            updateCrossword(entry.number, entry.answer); // Update crossword layout
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
}
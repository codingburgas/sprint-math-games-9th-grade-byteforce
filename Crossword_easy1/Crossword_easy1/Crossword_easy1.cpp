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
{ "PICTURE", "Something you hang on a wall or take with a camera to capture a moment forever.", 1 },
{ "NOTEBOOK", "Something you use to write or draw in, often carried to school or work", 2 },
{ "FRIENDS", "These are people you trust and enjoy spending time with.", 3 },
{ "APPLE", "A round fruit that is often red, green, or yellow, and is commonly eaten as a snack.", 4 },
{ "ELEPHANT", "A large animal with big ears and a long trunk, often found in zoos or the wild.", 5 },
{ "GUITAR", "A musical instrument with six strings that you play by strumming or plucking.", 6 },
{ "CHAIR", "A piece of furniture you sit on, typically with four legs and a backrest.", 7 }
};

// Function to display the crossword layout
void displayCrossword() {
    cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 1      |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
    cout << LIGHTAQUA << " 2          |   |   |   |   |   |   |   |   |\n";
    cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | P | I | C | T | U | R | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " | \n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | P | I | C | T | U | R | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | N | O | T | E | B | O | O | K |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | P | I | C | T | U | R | R |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | N | O | T | E | B | O | O | K |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | F | R | I | E | N | D | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 5) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | P | I | C | T | U | R | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | N | O | T | E | B | O | O | K |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | F | R | I | E | N | D | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | A | P | P | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " | \n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 6) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | P | I | C | T | U | R | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | N | O | T | E | B | O | O | K |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | F | R | I | E | N | D | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | A | P | P | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | E | L | E | P | H | A | N | T |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 7) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | P | I | C | T | U | R | E |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | N | O | T | E | B | O | O | K |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | F | R | I | E | N | D | S |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | A | P | P | L | E |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | E | L | E | P | H | A | N | T |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | G | U | I | T | A | R |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
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
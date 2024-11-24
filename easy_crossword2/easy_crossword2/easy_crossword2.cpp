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
{ "FREEDOM", "The state of being free; the power or right to act, speak, or think as one wants without hindrance or restraint.", 1 },
{ "OVERPASS", "A bridge or structure that allows one road or pathway to pass over another, typically used in highways, railroads, or busy intersections.", 2 },
{ "BUILDING", "A structure with a roof and walls, such as a house, school, or factory, designed for people to live in, work in, or store things.", 3 },
{ "WOMAN", "An adult female human.", 4 },
{ "APARTMENT", "A set of rooms designed for living, typically within a larger building.", 5 },
{ "SCHOOL", "An institution for educating children or providing instruction in a specific field.", 6 },
{ "DRINK", "A liquid that can be consumed, such as water, coffee, or soda.", 7 }
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
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | F | R | E | E | D | O | M |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              |   |   |   |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | F | R | E | E | D | O | M |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | O | V | E | R | P | A | S | S |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " | " << answer[6] << " | " << answer[7] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | F | R | E | E | D | O | M |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | O | V | E | R | P | A | S | S |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | B | U | I | L | D | I | N | G |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
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
        cout << LIGHTAQUA << " 1      | F | R | E | E | D | O | M |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | O | V | E | R | P | A | S | S |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | B | U | I | L | D | I | N | G |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | W | O | M | A | N |\n";
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
        cout << LIGHTAQUA << " 1      | F | R | E | E | D | O | M |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | O | V | E | R | P | A | S | S |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | B | U | I | L | D | I | N | G |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | W | O | M | A | N |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | A | P | A | R | T | M | E | N | T |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | " << answer[0] << " | " << answer[1] << " | " << answer[2] << " | " << answer[3] << " | " << answer[4] << " | " << answer[5] << " |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 7                  |   |   |   |   |   |\n";
        cout << LIGHTAQUA << "                    +---+---+---+---+---+\n";
    }
    else if (clueNumber == 7) {
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 1      | F | R | E | E | D | O | M |\n";
        cout << LIGHTAQUA << "        +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 2          | O | V | E | R | P | A | S | S |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 3              | B | U | I | L | D | I | N | G |\n";
        cout << LIGHTAQUA << "                +---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 4                  | W | O | M | A | N |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 5          | A | P | A | R | T | M | E | N | T |\n";
        cout << LIGHTAQUA << "            +---+---+---+---+---+---+---+---+---+\n";
        cout << LIGHTAQUA << " 6              | S | C | H | O | O | L |\n";
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
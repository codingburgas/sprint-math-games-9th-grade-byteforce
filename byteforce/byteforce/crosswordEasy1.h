#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// Words and clues for the crossword puzzle
struct CrosswordEntryEasy1 {
    string answer;
    string clue;
    int number;
};
void displayCrosswordEasy1();
void displayCluesEasy1();
bool checkGuessEasy1(int clueNumber, std::string guess);
void updateCrosswordEasy1(int clueNumber, std::string answer);
void crossowrdEasy1();



#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// Words and clues for the crossword puzzle
struct CrosswordEntryEasy2 {
    string answer;
    string clue;
    int number;
};
void displayCrosswordEasy2();
void displayCluesEasy2();
bool checkGuessEasy2(int clueNumber, std::string guess);
void updateCrosswordEasy2(int clueNumber, const std::string answer);
void crosswordEasy2();


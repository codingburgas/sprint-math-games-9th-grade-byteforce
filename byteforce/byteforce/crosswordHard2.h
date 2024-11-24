#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Words and clues for the crossword puzzle
struct CrosswordEntryHard2 {
    string answer;
    string clue;
    int number;
};
void displayCrosswordHard2();
void displayCluesHard2();
bool checkGuessHard2(int clueNumber, std::string guess);
void updateCrosswordHard2(int clueNumber, std::string answer);
void crosswordHard2();

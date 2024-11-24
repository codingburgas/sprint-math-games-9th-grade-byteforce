#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Words and clues for the crossword puzzle
struct CrosswordEntryHard1{
    string answer;
    string clue;
    int number;
};
void displayCrosswordHard1();
void displayCluesHard1();
bool checkGuessHard1(int clueNumber, std::string guess);
void updateCrosswordHard1(int clueNumber, std::string answer);
void crosswordHard1();


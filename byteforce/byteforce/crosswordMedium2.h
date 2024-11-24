#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Words and clues for the crossword puzzle
struct CrosswordEntryMedium2{
    string answer;
    string clue;
    int number;
};
void displayCrosswordMedium2();
void displayCluesMedium2();
bool checkGuessMedium2(int clueNumber, std::string guess);
void updateCrosswordMedium2(int clueNumber, std::string answer);
void crosswordMedium2();
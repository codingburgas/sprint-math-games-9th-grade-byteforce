#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Words and clues for the crossword puzzle
struct CrosswordEntryMedium1{
    string answer;
    string clue;
    int number;
};
void displayCrosswordMedium1();
void displayCluesMedium1();
bool checkGuessMedium1(int clueNumber, std::string guess);
void updateCrosswordMedium1(int clueNumber, std::string answer);
void crosswordMedium1();


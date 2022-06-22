#ifndef HEADER_H
#define HEADER_H

#include "functions.cpp"

void CreateCard(int m[5][12]);
void ShowCard(int m[5][12]);
int PrintMainMenu();
int PrintSecondaryMenu();
bool BetScreen(int a, int v[]);
bool RandomScreen(int a, int v[]);
void GenerateResult(int v[]);
int CompareResult(int result[], int card[]);

#endif
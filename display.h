#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

void displayOpponentLanding(char* userMove);
void displayOpponentWaiting(char* userMove, int* userState);
void displayOpponentLoaded(char* userMove, int* userState);
void displayOpponentDead(char* userMove);
void displayOpponentWinning(char* userMove);
void displayOpponentStaleMate(char* userMove);
void clearScreen();

#endif
#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

void clearScreen();

void displayLanding(int* playerMove);
void displayWaiting(int* playerMove);
void displayDodging(int* playerMove);
void displayDodgingWhileLoaded(int* playerMove);
void displayLoaded(int* playerMove);
void displayShootingWhileMissing(int* playerMove);
void displayDead(int* playerMove);
void displayShooting(int* playerMove);
void displayDeadWhileShooting(int* playerMove);
void getMoveFromLandingMenu(int* playerMove);
void getMoveFromPlayingMenu(int* playerMove);
void askForMoveAgain();

#endif

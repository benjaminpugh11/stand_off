#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

void askForMoveAgain(char* userMove);
void getMoveFromLandingMenu(char* userMove);
void getMoveFromPlayingMenu(char* userMove, int* userState);
void getCompMove(char* compMove,int* compState,int* gameChance);
int playOutBlock();
int playOutLoad(char* compMove);
int playOutShoot(char* compMove);

#endif
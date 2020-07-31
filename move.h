#include <stdbool.h>
#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED

bool getValidPlayerMove(int* playerMove,int validMove1, int validMove2);
void playOutMove(int* playerMove, int* opponentMove);
void getPlayerMoveWhenOpponentBlocked(int* playerMove);
void getPlayerMoveWhenOpponentLoaded(int* playerMove,int* opponentMove);
void getPlayerMoveWhenOpponentBlockedNLoaded(int* playerMove);
void getPlayerMoveWhenOpponentShoots(int* playerMove,int* opponentMove);
void getCompMove(int* opponentMove,int* gameChance);

#endif

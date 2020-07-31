#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game_constants.h"
#include "display.h"
#include "move.h"

int main(){

    srand(time(NULL));//Seed random data

    //Initialize Characters
    int playerInitialMove = INITIAL_MOVE;
    int opponentInitialMove = INITIAL_MOVE;

	int* playerMove = &playerInitialMove;
	int* opponentMove = &opponentInitialMove;

    int initialGameChance = ((rand()%10) + 1); // 1 - 10
	int* gameChance = &initialGameChance;

	displayLanding(playerMove);

	while(*playerMove != EXIT_GAME){

		getCompMove(opponentMove,gameChance);
		playOutMove(playerMove,opponentMove);
	}

	return 0;
}
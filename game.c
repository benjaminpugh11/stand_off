#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game_constants.h"
#include "display.h"
#include "move.h"
#include "game.h"

int main(){

    srand(time(NULL));//Seed random data

    //Initialize Characters
    int playerInitialState = ALIVE;
    int compInitialState = ALIVE;
    char playerInitialMove = INITIAL_MOVE;
    char compInitialMove = INITIAL_MOVE;

    int initialGameChance = ((rand()%10) + 1); // 1 - 10

	int* playerState = &playerInitialState;
	int* compState = &compInitialState;
	char* playerMove = &playerInitialMove;
	char* compMove = &compInitialMove;

	int* gameChance = &initialGameChance;

	displayOpponentLanding(playerMove);

	while(*playerMove != EXIT_GAME){

        getCompMove(compMove,compState,gameChance);
		playOutMove(compMove,compState,playerMove,playerState);
		getPlayerMove(playerMove,playerState,compState);
	}

	return 0;
}

void playOutMove(char* compMove, int* compState, char* playerMove, int* playerState){

	switch(*playerMove){
		case BLOCK:
			*playerState = playOutBlock(playerState);
			break;
		case LOAD:
			*playerState = playOutLoad(compMove);
			break;
		case SHOOT:
			*playerState = playOutShoot(compMove);
			break;
		case START_GAME:
		    initializeCharacters(compMove,compState,playerMove,playerState);
		default :
			break;
	}

	return;
}

void getPlayerMove(char* playerMove, int* playerState, int* compState){

		switch(*playerState){
			case VICTOR:
				displayOpponentDead(playerMove);
				break;
			case DEAD:
				displayOpponentWinning(playerMove);
				break;
			case DRAW:
				displayOpponentStaleMate(playerMove);
				break;
			default:
				if(*compState == LOADED)
					displayOpponentLoaded(playerMove,playerState);
				else
					displayOpponentWaiting(playerMove,playerState);
		}

		return;
}

void initializeCharacters(char* compMove, int* compState, char* playerMove, int* playerState){

    	*playerState = ALIVE;
    	*compState = ALIVE;
    	*playerMove = INITIAL_MOVE;
    	*compMove = INITIAL_MOVE;

    	return;
}
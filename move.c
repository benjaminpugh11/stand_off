#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game_constants.h"
#include "move.h"

void getMoveFromLandingMenu(char* userMove){

    printf("     FEELIN LUCKY??\n");
    printf("      %c) HXLL YAH\n",START_GAME);
    printf("      %c) NAH DU..\n",EXIT_GAME);
    printf("        WELL? ");

    scanf(" %c", userMove);

    while(*userMove != START_GAME && *userMove != EXIT_GAME){
        askForMoveAgain(userMove);
    }

    return;
}

void getMoveFromPlayingMenu(char* userMove, int* userState){

	printf("     WHATDYA FEELIN\n");
    printf("        %c) BLXCK\n",BLOCK);

    if(*userState == LOADED){

        printf("        %c) SH==T\n",SHOOT);
        printf("        WELL? ");

        scanf(" %c", userMove);

        while(*userMove != BLOCK && *userMove != SHOOT){
            askForMoveAgain(userMove);
        }
    }
    else {

        printf("        %c) L()AD\n",LOAD);
        printf("        WELL? ");
        scanf(" %c", userMove);

        while(*(userMove) != BLOCK && *(userMove) != LOAD){
            askForMoveAgain(userMove);
        }

        if(*(userMove) == LOAD){
            *userState = LOADED;
        }
    }

	return;
}

void askForMoveAgain(char* userMove){

    printf("     WHATLL BE? ");

    scanf(" %c", userMove);
    return;
}

int playOutBlock(int* playerState){
    return *playerState;
}

int playOutLoad(char* compMove){

    if(*compMove == SHOOT)
        return DEAD;

    return LOADED;
}

int playOutShoot(char* compMove){

    switch(*compMove){
        case SHOOT:
            return DRAW;
        case BLOCK:
            return ALIVE;
        default :
            return VICTOR;
    }
}

void getCompMove(char* compMove,int* compState,int* gameChance){

    switch(*compState){
        case ALIVE:
            if(*gameChance > 5){
                *compMove = LOAD;
                *compState = LOADED;
            } else {
                *compMove = BLOCK;
            }
            break;
        case LOADED:

            if(*gameChance > 8){
                *compMove = SHOOT;
                *compState = ALIVE;
            } else {
                *compMove = BLOCK;
            }
            break;
        default:
            *compMove = BLOCK;
            *compState = ALIVE;
    }

    *gameChance = ((rand()%10) + 1);
    return;
}

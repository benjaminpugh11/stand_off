#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "game_constants.h"
#include "display.h"
#include "move.h"

bool getValidPlayerMove(int* playerMove,int validMove1, int validMove2){

    scanf("%d", playerMove);

    if(*playerMove != validMove1 && *playerMove != validMove2)
        return false;
    else
        return true;
}

void playOutMove(int* playerMove, int* opponentMove){

        switch(*opponentMove){
            case BLOCKED:
                getPlayerMoveWhenOpponentBlocked(playerMove);
                break;
            case LOADED:
                getPlayerMoveWhenOpponentLoaded(playerMove,opponentMove);
                break;
            case BLOCKED_N_LOADED:
                getPlayerMoveWhenOpponentBlockedNLoaded(playerMove);
                break;
            case SHOOT:
                getPlayerMoveWhenOpponentShoots(playerMove,opponentMove);
                break;
            default:
                *playerMove = BLOCKED;
                *opponentMove = BLOCKED;
                break;
        }

        return;
}

void getPlayerMoveWhenOpponentBlocked(int* playerMove){

    if(*playerMove == SHOOT){
        displayDodging(playerMove);
    } else{
        displayWaiting(playerMove);
    }

    return;
}

void getPlayerMoveWhenOpponentLoaded(int* playerMove,int* opponentMove){

    if(*playerMove == SHOOT){
        displayDead(playerMove);
        *opponentMove = INITIAL_MOVE;//Game over: player won
    } else{
        displayLoaded(playerMove);
    }

    return;
}

void getPlayerMoveWhenOpponentBlockedNLoaded(int* playerMove){

    if(*playerMove == SHOOT){
        displayDodgingWhileLoaded(playerMove);
    } else{
        displayLoaded(playerMove);
    }

    return;
}

void getPlayerMoveWhenOpponentShoots(int* playerMove,int* opponentMove){

    switch(*playerMove){
        case LOADED:
            displayShooting(playerMove);
            *opponentMove = INITIAL_MOVE;//Game over: opponent won
            break;
        case SHOOT:
            displayDeadWhileShooting(playerMove);
            *opponentMove = INITIAL_MOVE;//Game over: no one won
            break;
        default :
            displayShootingWhileMissing(playerMove);
            break;
    }

    return;
}

void getCompMove(int* opponentMove,int* gameChance){

    switch(*opponentMove){
        case INITIAL_MOVE:
            if(*gameChance > 5){
                *opponentMove = LOADED;
            } else {
                *opponentMove = BLOCKED;
            }
            break;
        case BLOCKED:
            if(*gameChance > 5){
                *opponentMove = LOADED;
            } else {
                *opponentMove = BLOCKED;
            }
            break;
        case SHOOT:
            if(*gameChance > 4){
                *opponentMove = LOADED;
            } else {
                *opponentMove = BLOCKED;
            }
            break;
        default:
            if(*gameChance > 8){
                *opponentMove = SHOOT;
            } else {
                *opponentMove = BLOCKED_N_LOADED;
            }
            break;
    }

    *gameChance = ((rand()%10) + 1);
    return;
}
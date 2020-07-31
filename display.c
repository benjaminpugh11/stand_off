#include <stdio.h>
#include <stdbool.h>
#include "move.h"
#include "game_constants.h"
#include "display.h"

void clearScreen(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void displayLanding(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | - -|\n");
    printf("         | o o|\n");
    printf("         |    >\n");
    printf("         | -  |\n");
    printf("          |__|\n");
    printf("\n");

	getMoveFromLandingMenu(playerMove);
    return;
}

void displayWaiting(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | - -|\n");
    printf("         | o o|\n");
    printf("         |    >\n");
    printf("         | -  |\n");
    printf("          |__|\n");
    printf("\n");
    printf("          WELP\n");
    printf("\n");

	getMoveFromPlayingMenu(playerMove);
    return;
}

void displayDodging(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | - -|\n");
    printf("      _  | o o|\n");
    printf("     (_|==    >\n");
    printf("         | -  |\n");
    printf("          |__|\n");
    printf("\n");
    printf("      MISSIS5ISSI\n");
    printf("\n");

	getMoveFromPlayingMenu(playerMove);
    return;
}

void displayDodgingWhileLoaded(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | - /|\n");
    printf("      _  | 0 o|   __,_____\n");
    printf("     (_|==    >  / __.==--'\n");
    printf("         | -  | /#(-'\n");
    printf("          |__|  `-'\n");
    printf("\n");
    printf("         -PSHH-\n");
    printf("\n");

	getMoveFromPlayingMenu(playerMove);
    return;
}

void displayLoaded(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | - /|\n");
    printf("         | 0 o|   __,_____\n");
    printf("         |    >  / __.==--'\n");
    printf("         | -  | /#(-'\n");
    printf("          |__|  `-'\n");
    printf("\n");
    printf("         LOCKDN\n");
    printf("\n");

	getMoveFromPlayingMenu(playerMove);
    return;
}

void displayShootingWhileMissing(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | \\ /|\n");
    printf("  _____  | O 0|      __,_____   )\n");
    printf(" | DA? | |    >     / __.==--' ~= )\n");
    printf(" |_WUT__>| o  |    /#(-'        )\n");
    printf("          |__|     `-'\n");
    printf("\n");
    printf("    -B-L-X-C-K-E-D-\n\a");
    printf("\n");

    getMoveFromPlayingMenu(playerMove);
    return;
}

void displayDead(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | _ +\n");
    printf("         | X x|\n");
    printf("         |    >\n");
    printf("         | -  |\n");
    printf("          |__|\n");
    printf("\n");
    printf("       !YOU  WON!\n\a");
    printf("\n");

    getMoveFromLandingMenu(playerMove);
    return;
}

void displayShooting(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | - -|\n");
    printf("         | > <|      __,_____   )\n");
    printf("         |    >     / __.==--' ~= )\n");
    printf("         | u  |    /#(-'        )\n");
    printf("          |__|     `-'\n");
    printf("\n");
    printf("      ~YOU NO WIN~\n\a");
    printf("\n");

    getMoveFromLandingMenu(playerMove);
    return;
}

void displayDeadWhileShooting(int* playerMove) {

    clearScreen();

    printf("          /\\/\\\n");
    printf("          |  |\n");
    printf("         |    |\n");
    printf("      (__|____|__)\n");
    printf("         | _ +|\n");
    printf("         | X x|      __,_____   )\n");
    printf("         |    >     / __.==--' ~= )\n");
    printf("         | u  |    /#(-'        )\n");
    printf("          |__|     `-'\n");
    printf("\n");
    printf("      <NO ONE WIN>\n\a");
    printf("\n");

    getMoveFromLandingMenu(playerMove);
    return;
}

void getMoveFromLandingMenu(int* playerMove){

    printf("     FEELIN LUCKY??\n");
    printf("      %d) HXLL YAH\n",START_GAME);
    printf("      %d) NAH DU..\n",EXIT_GAME);
    printf("        WELL? ");

    while(!getValidPlayerMove(playerMove,START_GAME,EXIT_GAME)){
        askForMoveAgain(playerMove);
    }

    return;
}

void getMoveFromPlayingMenu(int* playerMove){

	printf("     WHATDYA FEELIN\n");

    if(*playerMove == LOADED || *playerMove == BLOCKED_N_LOADED){

        printf("        %d) BLXCK\n",BLOCKED_N_LOADED);
        printf("        %d) SH==T\n",SHOOT);
        printf("        WELL? ");

        while(!getValidPlayerMove(playerMove,BLOCKED_N_LOADED,SHOOT)){
            askForMoveAgain();
        }
    }
    else {

        printf("        %d) BLXCK\n",BLOCKED);
        printf("        %d) L()AD\n",LOADED);
        printf("        WELL? ");

        while(!getValidPlayerMove(playerMove,BLOCKED,LOADED)){
            askForMoveAgain();
        }
    }

	return;
}

void askForMoveAgain(){

    printf("        WHATLL BE? ");
    return;
}
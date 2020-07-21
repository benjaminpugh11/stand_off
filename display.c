#include <stdio.h>
#include "move.h"
#include "display.h"

void displayOpponentLanding(char* userMove) {

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

	getMoveFromLandingMenu(userMove);
    return;
}

void displayOpponentWaiting(char* userMove, int* userState) {

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

	getMoveFromPlayingMenu(userMove,userState);
    return;
}

void displayOpponentLoaded(char* userMove, int* userState) {

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

	getMoveFromPlayingMenu(userMove,userState);
    return;
}

void displayOpponentDead(char* userMove) {

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
    printf("       !YOU  WON!\n");

    getMoveFromLandingMenu(userMove);
    return;
}

void displayOpponentWinning(char* userMove) {

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
    printf("      ~YOU NO WIN~\n");

    getMoveFromLandingMenu(userMove);
    return;
}

void displayOpponentStaleMate(char* userMove) {

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
    printf("      <NO ONE WIN>\n");

    getMoveFromLandingMenu(userMove);
    return;
}

void clearScreen(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
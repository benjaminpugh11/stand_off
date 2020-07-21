#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

void startGameSession();
void playOutMove(char* compMove, int* compState, char* playerMove, int* playerState);
void getPlayerMove(char* playerMove, int* playerState, int* compState);
void initializeCharacters(char* compMove, int* compState, char* playerMove, int* playerState);

#endif
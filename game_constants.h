#ifndef GAME_CONSTANTS_H_INCLUDED
#define GAME_CONSTANTS_H_INCLUDED

//Menu Options / Moves
static char const BLOCK = 'B';
static char const LOAD = 'L';
static char const SHOOT = 'S';

static char const INITIAL_MOVE = 'I';
static char const START_GAME = 'Y';
static char const EXIT_GAME = 'N';

//States
static int const DEAD = -1;
static int const DRAW = 0;
static int const ALIVE = 1;
static int const LOADED = 2;
static int const VICTOR = 3;

#endif

#ifndef _FILEHANDLER_
    #define _FILEHANDLER_

#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE_X 10
#define BOARD_SIZE_Y 10

FILE *input, *output;

void boardRandom();
void boardPrint();
void boardLoad(char *filename);

int board[BOARD_SIZE_X][BOARD_SIZE_Y];

#endif // _FILEHANDLER_

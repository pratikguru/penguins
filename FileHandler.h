#ifndef _FILEHANDLER_
    #define _FILEHANDLER_

#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE_X 6
#define BOARD_SIZE_Y 6

FILE *input, *output;

int boardLoad();
void boardPrint();

int board[BOARD_SIZE_X][BOARD_SIZE_Y];

#endif // _FILEHANDLER_

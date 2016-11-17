#include "FileHandler.h"


void boardPrint() {
    int i, j;

    printf("\t");
    for (i = 0; i < BOARD_SIZE_X; i++) {
        printf("   %d   %d", i, i);
    }
    printf("\n\n");

    for (i = 0; i < BOARD_SIZE_X; i++) {

        printf("\t");
        for (j = 0; j < BOARD_SIZE_Y; ++j) {

            if ((j == 0) && (i % 2))
                printf("\t");

            printf(" /⎺⎺⎺\\  ");
        }
        printf("\n");

        printf("%d\t", i);
        for (j = 0; j < BOARD_SIZE_Y; ++j) {

            if ((j == 0) && (i % 2))
                printf("\t");

            printf("|  %d  | ", board[i][j]);
        }
        printf("\n");

        printf("\t");
        for (j = 0; j < BOARD_SIZE_Y; ++j) {

            if ((j == 0) && (i % 2))
                printf("\t");

            printf(" \\⎽⎽⎽/  ");
        }
        printf("\n");
    }
}

int boardLoad() {
    //creates an example of a board
    board[0][0] = 2;
    board[0][1] = 1;
    board[0][2] = 1;
    board[0][3] = 3;
    board[0][4] = 1;
    board[0][5] = 2;

    board[1][0] = 3;
    board[1][1] = 1;
    board[1][2] = 2;
    board[1][3] = 1;
    board[1][4] = 2;
    board[1][5] = 1;

    board[2][0] = 2;
    board[2][1] = 2;
    board[2][2] = 1;
    board[2][3] = 3;
    board[2][4] = 1;
    board[2][5] = 2;

    board[3][0] = 1;
    board[3][1] = 3;
    board[3][2] = 1;
    board[3][3] = 2;
    board[3][4] = 3;
    board[3][5] = 1;

    board[4][0] = 3;
    board[4][1] = 3;
    board[4][2] = 2;
    board[4][3] = 4;
    board[4][4] = 2;
    board[4][5] = 2;

    board[5][0] = 1;
    board[5][1] = 2;
    board[5][2] = 5;
    board[5][3] = 3;
    board[5][4] = 2;
    board[5][5] = 1;

    return 0;

}
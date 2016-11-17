#include "FileHandler.h"
#include <time.h>


void boardPrint() {
    int i, j;

    printf("\t");
    for (i = 0; i < BOARD_SIZE_X; i++) {
        if (i < 10)
            printf("   %d   %d", i, i);
        if (i >= 10)
            printf("  %d  %d", i, i);
    }
    printf("\n\n");

    for (i = 0; i < BOARD_SIZE_X; i++) {

        printf("\t");
        for (j = 0; j < BOARD_SIZE_Y; ++j) {

            if ((j == 0) && (i % 2))
                printf("\t");

            if (board[i][j] == 0)
                printf("        ");
            else
                printf(" /⎺⎺⎺\\  ");
        }
        printf("\n");

        printf("%d\t", i);
        for (j = 0; j < BOARD_SIZE_Y; ++j) {

            if ((j == 0) && (i % 2))
                printf("\t");

            if (board[i][j] == 0)
                printf("\t\t");
            else if (board[i][j] > 3)
                printf("| P %d | ", (board[i][j]) - 3);
            else
                printf("|  %d  | ", board[i][j]);

        }

        printf("\n");

        printf("\t");
        for (j = 0; j < BOARD_SIZE_Y; ++j) {

            if ((j == 0) && (i % 2))
                printf("\t");

            if (board[i][j] == 0)
                printf("        ");
            else
                printf(" \\⎽⎽⎽/  ");
        }
        printf("\n");
    }
}

int boardLoad() {
    int i, j;
    srand(time(NULL));
    //creates an example of a board
    /*board[0][0] = 2;
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
    board[4][4] = 10;
    board[4][5] = 2;

    board[5][0] = 1;
    board[5][1] = 2;
    board[5][2] = 5;
    board[5][3] = 3;
    board[5][4] = 2;
    board[5][5] = 1;*/
    for (i = 0; i < BOARD_SIZE_Y; i++) {
        for (int j = 0; j < BOARD_SIZE_X; ++j) {
            board[i][j] = rand()%6;
        }
    }

    return 0;

}
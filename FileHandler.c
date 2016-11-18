#include "FileHandler.h"
#include <string.h>
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
                printf(" /¯¯¯\\  ");
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
                printf(" \\___/  ");
        }
        printf("\n");
    }
}

void boardRandom() {
    int i, j;
    srand(time(NULL));
    for (i = 0; i < BOARD_SIZE_Y; i++) {
        for (j = 0; j < BOARD_SIZE_X; ++j) {
            board[i][j] = rand() % 6;
        }
    }
}


void boardLoad(char *filename){
    int i, j;
    char temp;
    char Directory[64];
    strcpy(Directory, "./");
    strcat(Directory, filename);
    input = fopen(Directory, "r");
    i = 0;
    j = 0;
    //ignores score in file reading
    while(temp != ';'){
        fscanf(input, "%c", &temp);
    }
    fscanf(input, "%c", &temp);

    while(fscanf(input, "%c", &temp) != EOF){
        if(temp == ',') continue;
        if(temp == ';'){
            i++;
            j = 0;
            fscanf(input, "%c", &temp);
            continue;
        }
        board[i][j] = (temp - '0');
        j++;
    }
}

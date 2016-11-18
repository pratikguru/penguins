#include "Placement.h"
#include "FileHandler.h"

void Placement(){
    printf("Placement phase here\n");
    setPenguins(getPenguins() - 1);
};

void placePenguin(int player,int x, int y){
    int tempscore;
    printf("%d\n", board[y][x]);
    if(board[y][x] > 1){
        printf("Invalid Move\n");
        return;
    }
    tempscore = board[y][x];
    board[y][x] = player+3;
    score[player-1] += tempscore;
}

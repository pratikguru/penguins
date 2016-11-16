#include "Movement.h"

Moves = 0;

int getMoves(){
    return Moves;
};

void defineMoves(){
    scanf("%d", &Moves);
}

void setMoves(int number){
    Moves = number;
};

void Movement(){
    setMoves(getMoves() - 1);
    printf("Movement here\n");
};

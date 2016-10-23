#include "Movement.h"

Moves = 0;

getMoves(){
    return Moves;
};

defineMoves(){
    scanf("%d", &Moves);
}

setMoves(int number){
    Moves = number;
};

Movement(){
    CollisionCheck();                       //for one or more penguins
    setMoves(getMoves() - 1);
    printf("Movement here\n");
};

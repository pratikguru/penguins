#include "Init.h"
#include "FileHandler.h"

Init(char *Phase, char Penguins, char *InBoard, char *OutBoard) {
    Penguins -= '0';            //char to int conversion
    setPenguins(Penguins);
    setMoves(5);                //will be taken from the board
    setPhase(Phase);
    if(getPenguins() > 0) running = true;
    input = fopen(InBoard, "r");
    output = fopen(OutBoard, "w");
};

definePenguins(){
    scanf("%d", &penguins);
};

getPenguins(){
    return penguins;
}

setPenguins(int number){
    penguins = number;
}

setRunning(bool Running){
    running = Running;
}

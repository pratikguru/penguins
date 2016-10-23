#include "Loop.h"

phase = PLACEMENT;

setPhase(char *P){
    if(strcmp(P, "movement") == 0) phase = MOVEMENT;
    if(strcmp(P, "placement") == 0) phase = PLACEMENT;
}

Loop(){                                        //during one round we place or move penguins
    //GetCommands();
    if(phase == PLACEMENT){
        Placement();
        if(getPenguins() < 1) phase = MOVEMENT;
    }
    if(phase == MOVEMENT) {
        Movement();
    }
    if(getMoves() == 0) setRunning(0);
};

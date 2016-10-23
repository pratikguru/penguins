#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "Init.h"
#include "Loop.h"
#include "Movement.h"
#include "Placement.h"
#include "Collisions.h"


#include "somth.h"

int main(int argc, char *argv[])
{

    if(argc == 1) {
        char *penguins = 6;
        Init("placement", *penguins);
    } else
    if(argc == 3) {
        char *phase = argv[1]+6;
        char *penguins = argv[2]+9;
        Init(phase, *penguins);
    } else                    //initialization of variables
    running = true;
    while(running){             //program is a loop
        if(th == 0) running = false;
        printf("%d\n",th);
        th--;
        //Loop();                 //here is what program do every turn
    }
    return argc;
}

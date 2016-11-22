#include "Movement.h"

/* These are the movement identifiers.
Left [x-1][y]
Right [x+1][y]
Up-Left [x][y-1]
Down-Left [x][y+1]
Up-Right [x+1][y-1]
Down-Right [x+1][y+1]
*/
Moves = 0;


bool CheckMoveValidity(){
    // add code to check of move is valid or not.
     return;
}

void MoveLeft(){                         /// this function controls the left movement of the penguin.
 if (scanf == 'A'){                     /// This checks the corresponding move
        if(CheckMoveValidity == true){  /// This checks the validity of the move.
            return [x][y-1];            /// Returns the navigation commands to the function
        }
  else{
    printf("Enter correct values");
  }

}
 else {
    printf("Invalid Moves");
    }
}

void MoveRight(){                      /// this is similar to the above function.
    if(scanf == 'D'){
        if(CheckMoveValidity == true){
        return [x+1][y];

        }
        else{
        printf("Enter correct values");
        }
     }
     else{
        printf("Invalid Move");
        }
}


void MoveUpLeft(){                                  /// this is similar to the above function
    if(scanf == 'W + A'){
        if(CheckMoveValidity == true){
        return [x][y-1];
        }
        else {
        printf("Enter correct Values!");
        }
    }
    else {
    Printf("Invalid Move");
    }


}

void MoveUpRight(){
 if (scanf == 'W + D'){
    if (CheckMoveValidity == true){
        return ([x+1][y-1]);
    }
    else{
        printf("Enter correct Values");
    }
 else{
 printf("Invalid Move");
 }

 }

 void MoveDownRight(){
if (scanf == 'S + D'){
    if(CheckMoveValidity == true){
    return [x+1][y+1];
    }
    else{
    printf("Enter correct Values");
    }
}
else{
printf("Invalid move");
}

}


void MoveDownLeft(){
if(scanf == 'S + A'){
    if(CheckMoveValidity ==true){
        return [x][y+1];
    }
    else{
    printf("Enter correct values");
    }

}
else{
printf("invalid Move");
}
}



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

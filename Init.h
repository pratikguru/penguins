#ifndef _INIT_
    #define _INIT_

#include <stdbool.h>

int penguins;
bool running;

void Init(char *Phase, char *Penguins, char *input, char *output);
void definePenguins();
void setPenguins(int number);
void setRunning(bool running);

int getPenguins();
#endif // _INIT_

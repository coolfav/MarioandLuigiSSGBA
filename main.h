#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

struct luigi {
    int x;
    int y;
    int enemiesStomped;
};

struct goomba {
    //0 is not, 1 if yes
    int stomped;
};


/* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif

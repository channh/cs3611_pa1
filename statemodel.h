// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : statemodel.h
// ----------------------------------

#ifndef statemodel_h
#define statemodel_h

#include <stdlib.h>
#include "state.h"
#include "system.h"

// Declare all of the states used in the state model.
// They are extern because they are defined (i.e., the  memory is 
// actually allocated) elsewhere (i.e., in the .c files for the 
// individual states).

extern state_t accepting;
extern state_t processing;
extern state_t manufacturing;
extern state_t shipping;

// Declare all of the functions.
void printStateName(void) ;
void handle_event( event current_event );

#endif


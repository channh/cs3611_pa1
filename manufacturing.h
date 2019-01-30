// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : manufacturing.h
// ----------------------------------

#ifndef manufacturing_h
#define manufacturing_h

#include "state.h"
// CS361 PA1 Group 1

static state_t* manufacture_failed();
static state_t* manufacture_completed();
static void 	entry_to_manufacturing();
static void 	exit_from_manufacturing();

#endif

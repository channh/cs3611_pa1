// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : processing.h
// ----------------------------------

#ifndef processing_h
#define processing_h

#include "state.h"

static state_t* invalid_payment();
static state_t* valid_payment();
static void 	entry_to_processing();
// static void 	exit_from_processing();

#endif

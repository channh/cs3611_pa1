// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : shipping.h
// ----------------------------------

#ifndef shipping_h
#define shipping_h

#include "state.h"

static state_t* shipment_lost();
static state_t* shipment_arrived();
static void 	entry_to_shipping();
// static void 	exit_from_shipping();

#endif

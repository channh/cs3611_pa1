// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : accepting.c
// ----------------------------------

#include "system.h"
#include "statemodel.h"
#include "accepting.h"

// Creates the object of the accepting state
state_t accepting = {
	order_received,             // ORDER_RECEIVED
    default_event_handler,      // INVALID_PAYMENT
    default_event_handler,      // VALID_PAYMENT
    default_event_handler,      // MANUFACTURE_FAILED
    default_event_handler,      // MANUFACTURE_COMPLETED
    default_event_handler,      // SHIPMENT_LOST
    default_event_handler,      // SHIPMENT_ARRIVED
    default_action,             // ENTRY
    exit_from_accepting         // EXIT
};

state_t* order_received() {
    exit_from_accepting();
    return &processing;
}

void exit_from_accepting() {
    getOrderSize();
    resetAttempts();
}


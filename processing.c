
#include "statemodel.h"
#include "processing.h"

// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : processing.c
// ----------------------------------

extern int attempts;

// Creates the object of the accepting state
state_t processing = {
	default_event_handler,      // ORDER_RECEIVED
    invalid_payment,          // INVALID_PAYMENT
    valid_payment,              // VALID_PAYMENT
    default_event_handler,      // MANUFACTURE_FAILED
    default_event_handler,      // MANUFACTURE_COMPLETED
    default_event_handler,      // SHIPMENT_LOST
    default_event_handler,      // SHIPMENT_ARRIVED
    entry_to_processing,        // ENTRY
    default_action              // EXIT
};

state_t* invalid_payment() {
    // attempts = incrementAttempts();
    if (attempts < 3) {
        return &processing;
    }
    else {
        paymentRejected();
        return &accepting;
    }
}

state_t* valid_payment() {
    return &manufacturing;
}

void entry_to_processing() {
    getPymntMethod();
}

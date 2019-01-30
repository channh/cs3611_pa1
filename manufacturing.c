#include "system.h"
#include "statemodel.h"
#include "manufacturing.h"

// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : manufacturing.c
// ----------------------------------

// Creates the object of the accepting state
state_t manufacturing = {
	default_event_handler,      // ORDER_RECEIVED
    default_event_handler,      // INVALID_PAYMENT
    default_event_handler,      // VALID_PAYMENT
    manufacture_failed,         // MANUFACTURE_FAILED
    manufacture_completed,      // MANUFACTURE_COMPLETED
    default_event_handler,      // SHIPMENT_LOST
    default_event_handler,      // SHIPMENT_ARRIVED
    entry_to_manufacturing,     // ENTRY
    exit_from_manufacturing     // EXIT
};

state_t* manufacture_failed() {
    exit_from_manufacturing();
    updateStats(FAIL);
    return &accepting;
}

state_t* manufacture_completed() {
    exit_from_manufacturing();
    chargeClient();
    return &shipping;
}

void entry_to_manufacturing() {
    dispatchFactoryLines();
}

void exit_from_manufacturing() {
    shutDownFactoryLines();
}

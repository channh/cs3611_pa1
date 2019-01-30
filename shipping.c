#include "system.h"
#include "statemodel.h"
#include "shipping.h"

// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : shipping.c
// ----------------------------------

// Creates the object of the accepting state
state_t shipping = {
	default_event_handler,      // ORDER_RECEIVED
    default_event_handler,      // INVALID_PAYMENT
    default_event_handler,      // VALID_PAYMENT
    default_event_handler,      // MANUFACTURE_FAILED
    default_event_handler,      // MANUFACTURE_COMPLETED
    shipment_lost,              // SHIPMENT_LOST
    shipment_arrived,           // SHIPMENT_ARRIVED
    entry_to_shipping,          // ENTRY
    default_action              // EXIT
};

state_t* shipment_lost() {
    refund();
    updateStats(LOST);
    return &accepting;
}

state_t* shipment_arrived() {
    startWarranty();
    updateStats(DONE);
    return &accepting;
}

void entry_to_shipping() {
    getAddress();
}

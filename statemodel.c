// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : statemodel.c
// ----------------------------------
#include "statemodel.h"
#include "system.h"
#include <stdlib.h>
#include <stdio.h>

// Define the initial state.
state_t* current_state = &accepting;;

void handle_event( event current_event)
{
	state_t* next_state;

	next_state = NULL;
	switch( current_event )
	{
		case ORDER_RECEIVED:
			next_state = current_state->order_received();
			break;
		case INVALID_PAYMENT:
			next_state = current_state->invalid_payment();
			break;
		case VALID_PAYMENT:
			next_state = current_state->valid_payment();
			break;
		case MANUFACTURE_FAILED:
			next_state = current_state->manufacture_failed();
			break;
		case MANUFACTURE_COMPLETED:
			next_state = current_state->manufacture_completed();
			break;
		case SHIPMENT_LOST:
			next_state = current_state->shipment_lost();
			break;
		case SHIPMENT_ARRIVED:
			next_state = current_state->shipment_arrived();
			break;
	}

	if ( next_state != NULL)
	{
		current_state = next_state; //change states
		printStateName();
		current_state->entry_to(); // enter the new state
	}
}

void printStateName(void)
{
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*\nCurrent State is: ");
	if ( current_state == &accepting )
		printf("ACCEPTING");
	else if ( current_state == &processing )
		printf("PROCESSING");
	else if ( current_state == &manufacturing )
		printf("MANUFACTURING");
	else if ( current_state == &shipping )
		printf("SHIPPING");
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*\n");
}

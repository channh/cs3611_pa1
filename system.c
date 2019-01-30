// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : system.c
// ----------------------------------
#include "system.h"
#include <stdio.h>
int ordersize;
int attempts;

// Accepting to Processing.
void getOrderSize(){
	ordersize = 0;
	// ask Dr. Aboutabl how we store the order size
	printf("Got an order of size = %d items\n", ordersize);
}

void resetAttempts(){
	attempts = 0;
	printf("Invalid Payment-Attempts Reset to %d", attempts);
}

// Processing.
int incrementAttempt(){
	// ask Dr. Aboutabl how we store the attempts
	attempts += 1;
	printf("Invalid Payment-Attempts Incremented to %d", attempts);
    return attempts;
}

// Processing to Accepting.
void paymentRejected(){
	printf("Payment Rejected");
}

// Update from Manufacturing and Shipping to Accepting.
void updateStats(update_setting value){
	printf("Updating Statistics for %d orders", value);
}

// Manufacturing to Shipping.
void chargeClient() {
	printf("Client has been charged");
}

// Shipping to Accepting.
void startWarranty(){
	printf("Warranty has started");
}

void refund(){
	printf("Refund Issued");
}

// Inside of Processing.
void getPymntMethod(){
	printf("Getting Payment Method");
}

// Inside of Manufacturing
void dispatchFactoryLines(){
	printf("Dispatching Factory Lines");
}

void shutDownFactoryLines(){
	printf("Shutting Down Factory Lines");
}

// Inside of Shipping.
void getAddress(){
	printf("Getting Ship-To Address");
}


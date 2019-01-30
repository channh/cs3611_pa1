// --------------------------------
// Assignment  : PA01-FSM
// Date        : 9/19/18
//
// Author      : Nathan Chan and Amanda Pearce
// File Name   : system.h
// ----------------------------------

#ifndef system_h
#define system_h

// Update Settings.
typedef enum
  {
    FAIL,
    LOST,
    DONE
  } update_setting;

// Events.
typedef enum
{
    ORDER_RECEIVED,
    INVALID_PAYMENT,
    VALID_PAYMENT,
    MANUFACTURE_FAILED,
    MANUFACTURE_COMPLETED,
    SHIPMENT_LOST,
    SHIPMENT_ARRIVED
} event;

# define INVALID_EVENT -1

// Declare all of the functions that the states will use.

// Accepting to Processing.
void getOrderSize();
void resetAttempts();

// Processing.
int incrementAttempts();

// Processing to Accepting.
void paymentRejected();

// Update from Manufacturing and Shipping to Accepting.
void updateStats(update_setting value);

// Manufacturing to Shipping.
void chargeClient();

// Shipping to Accepting.
void startWarranty();
void refund();

// Inside of Processing.
void getPymntMethod();

// Inside of Manufacturing
void dispatchFactoryLines();
void shutDownFactoryLines();

// Inside of Shipping.
void getAddress();

#endif

#
# Assignment  : PA01-FSM
# Date        : 9/19/18
#
# Author      : Amanda Pearce
# File Name   : Makefile
#

EXE=driver
CC=gcc
CFLAGS=-c

all: 
	$(CC) $(CFLAGS) driver.c
	$(CC) $(CFLAGS) statemodel.c
	$(CC) $(CFLAGS) system.c -o system.o
	$(CC) $(CFLAGS) state.c -o state.o
	$(CC) $(CFLAGS) accepting.c
	$(CC) $(CFLAGS) processing.c
	$(CC) $(CFLAGS) manufacturing.c
	$(CC) $(CFLAGS) shipping.c
	$(CC) driver.o statemodel.o system.o state.o accepting.o processing.o manufacturing.o shipping.o -o $(EXE)
	

clean:
	rm -f *.o
	rm -f $(EXE)

    

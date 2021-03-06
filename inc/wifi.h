/*
 * wifi.h
 *
 *  Created on: Apr 30, 2014
 *      Author: stevenguan
 */

#ifndef WIFI_H_
#define WIFI_H_

#include "uart.h"

/* WiFi Macros */
#define AUTO_CONNECT 1
#define CMD_MODE 2
#define MAX_SIZE 50
#define WIFI_BUFF_SIZE 10

/* State Variable, buffer iterator */
int STATE, iterator, audio_index;

/* Flag to check for a new connection */
int check_flag;
int message;

/* Buffer to hold individual messages */
char buffer[WIFI_BUFF_SIZE];

/* Enumeration for state */
enum{
	IDLE, 				/* IDLE state, currently no connections */
	CONNECTED,			/* CONNECTED state, Android application is connected but currently doing nothing */
	DISPENSING_FOOD,	/* CONNECTED state, performing a food dispense command */
	DISPENSING_WATER,	/* CONNECTED state, performing a water dispense command */
	CAPTURING,			/* CONNCETED state, performing a picture command */
	TALKING1, 			/* CONNCETED state, performing audio command */
	TALKING2, 			/* CONNCETED state, performing audio command */
	TALKING3, 			/* CONNCETED state, performing audio command */
	PAN_LEFT,			/* CONNCETED state, panning camera left */
	PAN_RIGHT,			/* CONNCETED state, panning camera right */
	SCHEDULING			/* CONNECTED state, performing schedule change */
};

/* Enumeration for message */
enum{
	START, OPEN, CLOSED
};

/* Function prototypes */
void initWiFi(int setting);
void getMessage(char string[]);

#endif /* WIFI_H_ */

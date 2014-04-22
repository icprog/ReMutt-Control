/*
 * fsr_circuit.c
 *
 *  Created on: Apr 22, 2014
 *      Author: eric_brunnett
 */

/*==============================================================================
 Includes
==============================================================================*/

#include "fsr_circuit.h"
#include "typedef.h"
/*==============================================================================
 Global function definitions
==============================================================================*/

/*------------------------------------------------------------------------------
 function name:		initFSR
 description: 		initializes the gpios for the load sensor circuits
 parameters:		desired voltage, stop bit, parity
 returned value:	none
------------------------------------------------------------------------------*/
void initFSR()
{
	//Set load signals to inputs
	GPIOSetDir(WATER_FULL_SIG_PORT, WATER_FULL_SIG_PIN, GPIO_INPUT);
	GPIOSetDir(WATER_EMPTY_SIG_PORT, WATER_EMPTY_SIG_PIN, GPIO_INPUT);
	GPIOSetDir(FOOD_FULL_SIG_PORT, FOOD_FULL_SIG_PIN, GPIO_INPUT);

	//Set DCP control signals to outputs
	GPIOSetDir(FOOD_FULL_CS_PORT, FOOD_FULL_CS_PIN, GPIO_OUTPUT);
	GPIOSetDir(FOOD_FULL_INC_PORT, FOOD_FULL_INC_PIN, GPIO_OUTPUT);
	GPIOSetDir(FOOD_FULL_UD_PORT, FOOD_FULL_UD_PIN, GPIO_OUTPUT);

	//TODO: set water full and water empty control signals to outputs

	//Set initial control signal values
	GPIOSetValue(FOOD_FULL_CS_PORT, FOOD_FULL_CS_PIN, 1);
	GPIOSetValue(FOOD_FULL_INC_PORT, FOOD_FULL_INC_PIN, 1);
	GPIOSetValue(FOOD_FULL_UD_PORT, FOOD_FULL_UD_PIN, 1);

	//TODO: set water full and water empty initial control signal values
}

/*------------------------------------------------------------------------------
 function name:		setDCPVoltage
 description: 		set the digitally controlled potentiometer for a given load
 	 	 	 	 	 signal to a desired voltage
 parameters:		desired voltage, stop bit, parity
 returned value:	none
------------------------------------------------------------------------------*/
void setDCPVoltage (int voltage, uint8 signal)
{
	int i = voltage;
	while(i > 0)
	{
		switch(signal)
		{
			case WATER_FULL:

				break;
			case WATER_EMPTY:

				break;
			case FOOD_FULL:

				break;
			default:

				break;
		}
		i--;
	}
}

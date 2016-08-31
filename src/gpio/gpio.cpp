/*
 * gpio.cpp
 *
 *  Created on: 31.08.2016
 *      Author: olli
 */

#include "gpio.h"

GPIO::GPIO()
{
}

GPIO::GPIO(GPIO_PORT inport, GPIO_PIN inpin, bool inactiveLow)
{
	port = inport;
	pin = inpin;
	activeLow = inactiveLow;
}


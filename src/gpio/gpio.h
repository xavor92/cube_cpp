/*
 * gpio.h
 *
 *  Created on: 31.08.2016
 *      Author: olli
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_

#include "default.h"

typedef enum {
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15
} GPIO_PIN;

typedef enum {
	PORTA,
	PORTB,
	PORTC,
	PORTD,
	PORTE,
	PORTF
} GPIO_PORT;

class GPIO
{
public:
	GPIO();
	GPIO(GPIO_PORT port, GPIO_PIN pin, bool activeLow);
	RETURNCODE init();
private:
	GPIO_PORT port;
	GPIO_PIN pin;
	bool activeLow;
};



#endif /* GPIO_GPIO_H_ */

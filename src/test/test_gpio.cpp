/*
 * test_gpio.cpp
 *
 *  Created on: 27.08.2016
 *      Author: olli
 */


#include "unity.h"
#include "test_gpio.h"
#include "gpio/gpio.h"

void test_gpio_class_exists(void)
{
	GPIO test_obj;
}

void test_gpio_has_init(void)
{
	GPIO test_pin;
	test_pin.init();
}

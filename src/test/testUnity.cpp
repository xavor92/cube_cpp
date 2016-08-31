/*
 * testUnity.c
 *
 *  Created on: 22.08.2016
 *      Author: olli
 */

#include "unity.h"
#include "test_gpio.h"

void setUp(void) {
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_should_pass(void) {
    TEST_PASS();
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_pass);
    RUN_TEST(test_gpio_class_exists);
    return UNITY_END();
}

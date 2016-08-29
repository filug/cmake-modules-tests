/*
 * example2.c
 *
 *  Created on: Aug 29, 2016
 *      Author: filug
 */

#include <unity.h>

#include "unity/lib_to_test.h"

void test_example2() {
    TEST_ASSERT_EQUAL(1, return_1());
    TEST_ASSERT_EQUAL(2, return_2());
    TEST_ASSERT_EQUAL(3, return_3());
    TEST_ASSERT_EQUAL(5, return_5());
    TEST_ASSERT_EQUAL_STRING("hello world", return_hello_world());
}



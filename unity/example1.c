/*
 * example1.c
 *
 *  Created on: Aug 29, 2016
 *      Author: filug
 */

#include <unity.h>

void test_ints(void) {
    TEST_ASSERT_EQUAL(1, 1);
}

void test_strings(void) {
    const char *foo = "string to compare";

    TEST_ASSERT_EQUAL_STRING("string to compare", foo);
}

void test_pointers(void) {
    const char *ptr1;
    const char *ptr2 = ptr1;

    TEST_ASSERT_EQUAL_PTR(ptr1, ptr2);
}


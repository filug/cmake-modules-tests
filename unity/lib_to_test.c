/*
 * lib_to_test.c
 *
 *  Created on: Aug 29, 2016
 *      Author: filug
 */

int return_1() {
    return 1;
}

int return_2() {
    return 2;
}

int return_3() {
    return 3;
}

int return_5() {
    return 5;
}

const char* return_hello_world() {
    static const char *hello_world = "hello world";

    return hello_world;
}

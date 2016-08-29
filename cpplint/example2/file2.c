/*
 * Copyright (c) 2016 Piotr L. Figlarek
 */

#include <stdio.h>

#include "cpplint/example2/file1.h"

static int increment(int i) {
    return ++i;
}

void test_me() {
    int i = 1;
    int j = 2;

    int k = i + increment(j);

    printf("k: %d\n", k);
}


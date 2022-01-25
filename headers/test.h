#ifndef TEST_H
#define TEST_H

#include <stdbool.h>
#include <stdio.h>

typedef void (*printer) (int num_to_print);

void thing_1(int num_to_print);
void thing_2(int num_test);

void call_thing(printer funct, int num);

#endif

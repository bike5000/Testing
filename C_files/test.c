#include "test.h"

void thing_1(int num_to_print)
{
    printf("%d\n", num_to_print);
    return;
}

void thing_2(int num_test)
{
    printf("%d\n", num_test * 11);
    return;
}

void call_thing(printer funct, int num)
{
    funct(num);
    return;
}

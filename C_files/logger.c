#include "logger.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void print_count(int new_val)
{
    static int counter = 3;
    printf("%d\n", counter);
    counter = new_val;
    return;
}

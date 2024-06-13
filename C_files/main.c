#include "logger.h"
#include "test.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint16_t f1;
    uint8_t f2;
    // padding here
} Foo_t;

int main()
{
    Foo_t foo = {
        .f1 = 0xFEAB,
        .f2 = 0xCC,
    };
    uint8_t * arr = (uint8_t *)(&foo);

    for(int i = 0; i < sizeof(Foo_t); i++) {
        printf("%x ", arr[i]);
    }
    printf("\n");

    return 0;
}

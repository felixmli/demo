#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    /*
        uint8_t is an unsigned 8-bit integer type.
        even if you assign a value greater than 255, it will be truncated to 8 bits.
    */
    uint8_t a = (uint8_t) 256;
    uint8_t b = (uint8_t) 500;
    uint8_t c = (uint8_t) -1;
    uint8_t d = (uint8_t) -100;
    uint8_t e = (uint8_t) -1000;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);
    
    exit(0);
}
#include <stdio.h>

int main(){

    // 0000 1001
    unsigned int x = 9;
    // 0001 1000
    unsigned int y = 24;

    unsigned int r;

    // 0010 0100 = 36
    r = x << 2;
    printf("x << 2: d\n ", r);
    
    // 0000 0010 = 2
    r = x >> 2;
    printf("x >> 2: d\n ", r);
    
    // 1111 0110 = -10
    r = ~x;
    printf("~x: %d\n", r);

    // 0000 1000 = 8 
    r = x & y;
    printf("x & y: %d\n", r);

    // 0001 1001 = 25
    r = x | y;
    printf("x | y: %d\n", r);

    // 0001 0001 = 17
    r = x ^ y;
    printf("x ^ y: %d\n", r);

    return 0;
}
#include <stdio.h>
#include "square.h"

// -> is used for accessing members ( variables, methods )of a structure 
// or a class through pointer
void square_create(square_t *square, int length){
    square -> length = length;
    square -> area = length * length;
    square -> perimeter = length * 4;
}

// By declaring the pointer parameter as const, you are indicating 
// that the function will not modify the square_t

int square_get_sl(const square_t *square){
    return square -> length;
}

int square_get_area(const square_t *square){
    return square -> area;
}

int square_get_perimeter(const square_t *square){
    return square -> perimeter;
}
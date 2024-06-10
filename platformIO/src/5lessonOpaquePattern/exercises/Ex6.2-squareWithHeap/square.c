#include <stdio.h>
#include "square.h"

// -> is used for accessing members ( variables, methods )of a structure or a class through pointer
square_t square_create(int side) {
    square_t square;
    square.side = side;
    return square;
}

// By declaring the pointer parameter as const, you are 
// indicating that the function will not modify the square_t

int square_get_side(square_t square) {
    return square.side;
}

int square_get_area(square_t square) {
    return square.side * square.side;
}

int square_get_perimeter(square_t square) {
    return 4 * square.side;
}
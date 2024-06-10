#include "square.h"
#include <stdlib.h>

struct square_s {
    int side_length;
};

// Create a square with a given side length
//Structure Definition: The actual definition of struct 
// square_s is hidden in the implementation file.
square_t square_create(int side_length) {
    square_t square = (square_t)malloc(sizeof(struct square_s));
    if (square != NULL) {
        square->side_length = side_length;
    }
    return square;
}

int square_get_sl(square_t square) {
    return square->side_length;
}

int square_get_area(square_t square) {
    return square->side_length * square->side_length;
}

int square_get_perimeter(square_t square) {
    return 4 * square->side_length;
}

void square_destroy(square_t square) {
    free(square);
}

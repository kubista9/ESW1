#include <stdio.h>
#include "square.h"

int main() {
    square_t mySquare;
    square_create(&mySquare, 5);

    printf("The side length of my square is %d\n", square_get_sl(&mySquare));
    printf("The area of my square is %d\n", square_get_area(&mySquare));
    printf("The perimeter of my square is %d\n", square_get_perimeter(&mySquare));

    return 0;
}

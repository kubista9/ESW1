#include <stdio.h>
#include "rectangle.h"

int main() {
    rectangle_t myRectangle;
    rectangle_create(&myRectangle, 5, 3);

    printf("The length of my rectangle is %d\n", rectangle_get_height(&myRectangle));
    printf("The widthh of my rectangle is %d\n", rectangle_get_width(&myRectangle));
    printf("The area of my rectangle is %d\n", rectangle_get_area(&myRectangle));
    printf("The perimeter of my rectangle is %d\n", rectangle_get_perimeter(&myRectangle));

    return 0;
}


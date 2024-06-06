#include <stdio.h>
#include "rectangle.h"

int main() {
    rectangle_t myRectangle = rectangle_create(5);

    printf("The heigth of my rectangle is %d\n", rectangle_get_height(myRectangle));
    printf("The width of my rectangle is %d\n", rectangle_get_width(myRectangle));
    printf("The area of my rectangle is %d\n", rectangle_get_area(myRectangle));
    printf("The perimeter of my rectangle is %d\n", rectangle_get_perimeter(myRectangle));

    rectangle_destroy(myRectangle);

    return 0;
}

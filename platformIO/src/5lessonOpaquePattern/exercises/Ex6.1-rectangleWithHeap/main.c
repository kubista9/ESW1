#include <stdio.h>
#include "rectangle.h"

int main() {

    // Using rectangle
    rectangle_t my_rectangle = rectangle_create(5, 10);
    printf("Rectangle Width: %d\n", rectangle_get_width(my_rectangle));
    printf("Rectangle Height: %d\n", rectangle_get_height(my_rectangle));
    printf("Rectangle Area: %d\n", rectangle_get_area(my_rectangle));
    printf("Rectangle Perimeter: %d\n", rectangle_get_perimeter(my_rectangle));

    return 0;
}

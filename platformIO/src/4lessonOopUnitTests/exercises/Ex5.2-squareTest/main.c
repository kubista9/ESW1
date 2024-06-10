#include <stdio.h>
#include "rectangle.h"

int main() {
    rectangle_t rect;
    rectangle_error_t result = rectangle_create(&rect, 5, 10);

    if (result == SUCCESS) {
        printf("Rectangle created successfully.\n");
        printf("Width: %d\n", rectangle_get_width(&rect));
        printf("Height: %d\n", rectangle_get_height(&rect));
        printf("Area: %d\n", rectangle_get_area(&rect));
        printf("Perimeter: %d\n", rectangle_get_perimeter(&rect));
    } else {
        printf("Failed to create rectangle. Invalid arguments provided.\n");
    }

    return 0;
}

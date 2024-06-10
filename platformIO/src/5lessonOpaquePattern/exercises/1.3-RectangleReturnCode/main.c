#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

int main() {
    rectangle_t *myRectangle;
    rectangle_error_t result = rectangle_create(&myRectangle, 5, 3);

    if (result == SUCCESS) {
        printf("The length of my rectangle is %d\n", rectangle_get_height(myRectangle));
        printf("The width of my rectangle is %d\n", rectangle_get_width(myRectangle));
        printf("The area of my rectangle is %d\n", rectangle_get_area(myRectangle));
        printf("The perimeter of my rectangle is %d\n", rectangle_get_perimeter(myRectangle));
    } else {
        printf("Failed to create rectangle. Invalid arguments provided.\n");
    }

    // Free the allocated memory for the rectangle
    free(myRectangle);

    return 0;
}

#include <stdio.h>
#include "rectangle.h"

// -> is used for accessing members ( variables, methods )of a structure or a class through pointer
void rectangle_create(rectangle_t *rectangle, int width, int height){
    rectangle -> width = width;
    rectangle -> height = height;
    rectangle -> area = height * width;
    rectangle -> perimeter = 2 * (height + width);
}

// By declaring the pointer parameter as const, you are indicating that the function will not modify the rectangle_t

int square_get_height(const rectangle_t *rectangle){
    return rectangle -> height;
}

int square_get_width(const rectangle_t *rectangle){
    return rectangle -> width;
}

int square_get_area(const rectangle_t *rectangle){
    return rectangle -> area;
}

int square_get_perimeter(const rectangle_t *rectangle){
    return rectangle -> perimeter;
}
#include <stdio.h>
#include "rectangle.h"

// -> is used for accessing members ( variables, methods )of a structure or 
// a class through pointer
rectangle_error_t rectangle_create(rectangle_t *rectangle, int width, int height) {
    if (width < 0 || height < 0) {
        return INVALID_ARGUMENT;
    }
    rectangle->width = width;
    rectangle->height = height;
    rectangle->area = width * height;
    rectangle->perimeter = 2 * (width + height);
    return SUCCESS;
}

// By declaring the pointer parameter as const, you are indicating 
// that the function will not modify the rectangle_t

int rectangle_get_height(const rectangle_t *rectangle){
    return rectangle -> height;
}

int rectangle_get_width(const rectangle_t *rectangle){
    return rectangle -> width;
}

rectangle_error_t setWidth(rectangle_t *rectangle, int width) {
    if (width < 0) {
        return INVALID_ARGUMENT;
    }
    rectangle->width = width;
    return SUCCESS;
}

rectangle_error_t setHeight(rectangle_t *rectangle, int height) {
    if (height < 0) {
        return INVALID_ARGUMENT;
    }
    rectangle->height = height;
    return SUCCESS;
}

int rectangle_get_area(const rectangle_t *rectangle){
    return rectangle -> area;
}

int rectangle_get_perimeter(const rectangle_t *rectangle){
    return rectangle -> perimeter;
}
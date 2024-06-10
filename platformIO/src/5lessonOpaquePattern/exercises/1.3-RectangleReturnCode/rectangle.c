#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

rectangle_error_t rectangle_create(rectangle_t **rectangle, int width, int height) {
    if (width < 0 || height < 0) {
        return INVALID_ARGUMENT;
    }
    *rectangle = malloc(sizeof(rectangle_t));
    if (*rectangle == NULL) {
        return INVALID_ARGUMENT; // Memory allocation failed
    }
    (*rectangle)->width = width;
    (*rectangle)->height = height;
    (*rectangle)->area = width * height;
    (*rectangle)->perimeter = 2 * (width + height);
    return SUCCESS;
}

int rectangle_get_width(const rectangle_t *rectangle) {
    return rectangle->width;
}

int rectangle_get_height(const rectangle_t *rectangle) {
    return rectangle->height;
}

int rectangle_get_area(const rectangle_t *rectangle) {
    return rectangle->area;
}

int rectangle_get_perimeter(const rectangle_t *rectangle) {
    return rectangle->perimeter;
}

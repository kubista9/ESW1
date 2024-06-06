#include <stdlib.h>
#include "rectangle.h"

struct rectangle_s {
    int width;
    int height;
};

rectangle_t rectangle_create(int width, int height){
    rectangle_t rectangle = (rectangle_t)malloc(sizeof(struct rectangle_s));
    if (rectangle != NULL) {
        rectangle->width = width;
        rectangle->height = height;
    }
}

int rectangle_get_width(rectangle_t rectangle){
    return rectangle->width;
}

int rectangle_get_height(rectangle_t rectangle){
    return rectangle->height;
}

int rectangle_get_area(rectangle_t rectangle){
    return rectangle->width * rectangle->height;
}

int rectangle_get_perimeter(rectangle_t rectangle){
    return 2 * (rectangle->width + rectangle->height);
}

void rectangle_destroy(rectangle_t rectangle){
    free(rectangle);
}


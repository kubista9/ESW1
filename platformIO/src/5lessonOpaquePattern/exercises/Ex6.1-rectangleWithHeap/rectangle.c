#include "rectangle.h"

rectangle_t rectangle_create(int width, int height) {
    rectangle_t rectangle;
    rectangle.width = width;
    rectangle.height = height;
    return rectangle;
}

int rectangle_get_width(rectangle_t rectangle) {
    return rectangle.width;
}

int rectangle_get_height(rectangle_t rectangle) {
    return rectangle.height;
}

int rectangle_get_area(rectangle_t rectangle) {
    return rectangle.width * rectangle.height;
}

int rectangle_get_perimeter(rectangle_t rectangle) {
    return 2 * (rectangle.width + rectangle.height);
}

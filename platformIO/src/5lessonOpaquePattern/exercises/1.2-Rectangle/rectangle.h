#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct rectangle_s* rectangle_t;

rectangle_t rectangle_create(int width, int height);
int rectangle_get_width(rectangle_t rectangle);
int rectangle_get_height(rectangle_t rectangle);
int rectangle_get_area(rectangle_t rectangle);
int rectangle_get_perimeter(rectangle_t rectangle);
void rectangle_destroy(rectangle_t rectangle);

#endif
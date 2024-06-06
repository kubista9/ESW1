#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct rectangle_s* rectangle_t;

typedef enum {
    RECTANGLE_SUCCESS,
    RECTANGLE_ERROR_NEGATIVE_DIMENSION
} rectangle_error_t;

rectangle_t rectangle_create(double width, double height);
rectangle_error_t rectangle_setWidth(rectangle_t rectangle, double width);
rectangle_error_t rectangle_setHeight(rectangle_t rectangle, double height);
double rectangle_getWidth(rectangle_t rectangle);
double rectangle_getHeight(rectangle_t rectangle);
double rectangle_getArea(rectangle_t rectangle);
void rectangle_promptUserToGiveDimensions(rectangle_t rectangle);
void rectangle_printInfo(rectangle_t rectangle);
void rectangle_destroy(rectangle_t rectangle);

#endif 

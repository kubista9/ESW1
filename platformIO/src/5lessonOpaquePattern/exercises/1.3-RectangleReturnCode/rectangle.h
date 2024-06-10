#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef enum {
    SUCCESS = 0,
    INVALID_ARGUMENT = 1,
    // Add other error codes as needed
} rectangle_error_t;

typedef struct {
    int width;
    int height;
    int area;
    int perimeter;
} rectangle_t;

rectangle_error_t rectangle_create(rectangle_t **rectangle, int width, int height);
int rectangle_get_width(const rectangle_t *rectangle);
int rectangle_get_height(const rectangle_t *rectangle);
int rectangle_get_area(const rectangle_t *rectangle);
int rectangle_get_perimeter(const rectangle_t *rectangle);

#endif // RECTANGLE_H

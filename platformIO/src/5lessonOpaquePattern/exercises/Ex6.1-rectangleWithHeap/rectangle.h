// checks if SQUARE_H has not been defined. If it hasn't, the preprocessor 
// includes the code that follows up to the next #endif directive.
#ifndef RECTANGLE_H

// defines the macro SQUARE_H. This is typically done immediately after the #ifndef 
// check to ensure that the macro is defined for subsequent checks in the same compilation unit
#define RECTANGLE_H

typedef struct {
    int width;
    int height;
} rectangle_t;

rectangle_t rectangle_create(int width, int height);
int rectangle_get_width(rectangle_t rectangle);
int rectangle_get_height(rectangle_t rectangle);
int rectangle_get_area(rectangle_t rectangle);
int rectangle_get_perimeter(rectangle_t rectangle);

#endif // RECTANGLE_H
// checks if SQUARE_H has not been defined. If it hasn't, the preprocessor 
// includes the code that follows up to the next #endif directive.
#ifndef RECTANGLE_H

// defines the macro SQUARE_H. This is typically done immediately after the #ifndef
//  check to ensure that the macro is defined for subsequent checks in the same compilation unit
#define RECTANGLE_H

typedef struct {
    int width;
    int height;
    int area;
    int perimeter;
} rectangle_t;

typedef enum {
    SUCCESS = 0,
    INVALID_ARGUMENT = 1
} rectangle_error_t;

// '*' - dereference a pointer,  In C, pointers are variables that 
// store the memory address of another variable
rectangle_error_t rectangle_create(rectangle_t *rectangle, int wdith, int height);
int rectangle_get_width(const rectangle_t *rectangle);
int rectangle_get_height(const rectangle_t *rectangle);
int rectangle_get_area(const rectangle_t *rectangle);
int rectangle_get_perimeter(const rectangle_t *rectangle);

#endif // RECTANGLE_H
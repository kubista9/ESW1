// checks if SQUARE_H has not been defined. If it hasn't, the preprocessor includes the code that follows up to the next #endif directive.
#ifndef SQUARE_H

// defines the macro SQUARE_H. This is typically done immediately after the #ifndef check to ensure that the macro is defined for subsequent checks in the same compilation unit
#define SQUARE_H

typedef struct {
    int length;
    int area;
    int perimeter;
} square_t;


// '*' - dereference a pointer,  In C, pointers are variables that store the memory address of another variable
void square_create(square_t *square, int length);
int square_get_sl(const square_t *square);
int square_get_area(const square_t *square);
int square_get_perimeter(const square_t *square);

#endif //SQUARE_H
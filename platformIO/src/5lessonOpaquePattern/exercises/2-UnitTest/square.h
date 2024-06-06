#ifndef SQUARE_H
#define SQUARE_H

// Forward declaration of the struct
typedef struct square_s* square_t;

square_t square_create(int side_length);
int square_get_sl(square_t square);
int square_get_area(square_t square);
int square_get_perimeter(square_t square);
void square_destroy(square_t square);

#endif 

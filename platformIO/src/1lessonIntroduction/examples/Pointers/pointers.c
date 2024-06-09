#include <stdio.h>

void swap(int *a, int *b){
    printf("a: %p\n b: %p\n", a, b);
    printf("*a: %d\n *b: %d\n", *a, *b);
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int b = 42;
    int *a = &b; // a is a pointer to an integer, and it points to the address of b

    printf("b: %d\n", b); 
    // -> b: 42
    printf("&b: %p\n", &b); // %p is the format specifier for pointers
    // -> &b: 0x16d4a7178
    printf("a: %p\n", a); 

    printf("|--------------------------------|\n");
    // -> a: 0x16d4a7178

    *a  = 50;
    printf("b: %d\n", b); 
    // -> 50
    printf("&b: %p\n", &b); 
    printf("a: %p\n", a); 

    printf("|--------------------------------|\n");
    // pass by reference/pointer

    int e, f, g;
    e = f = g = 0;

    printf("enter 3 numbers: ");
    scanf("%d %d %d", &e, &f, &g);
    printf("Result: %d\n", e + f + g);

    printf("|--------------------------------|\n");
    
    int x, y;
    x = 5;
    y = 10;
    printf("x: %d, y: %d\n", x, y);
    printf("&x: %p\n &y: %p\n", &x, &y);
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    return 0;

}




#include <stdio.h>

int main(){
    
    printf("Hello World\n"); // \n is a newline character
    // -> Hello World
    printf("\tAnother line of text\n"); // \t is a tab character
    // ->     Another line of text
    printf("double quote: \"\n"); // \" is a double quote character
    // -> double quote: "
    printf("backslash: \\\n"); // \\ is a backslash character
    // -> backslash: \
    
    int x = 5;
    printf("x: %d \n", x); // %d is a placeholder for an integer
    // -> x: 5
    printf("%d, %d, %d \n", x, x+1, x+2); // multiple placeholders
    // -> 5, 6, 7

    char c = 'A';
    printf("c: %c \n", c); // %c is a placeholder for a character
    // -> c: A

    double y = 4.56;
    printf("y: %lf \n", y); // %lf is a placeholder for a double
    // -> y: 4.560000

    float z = 2.5;
    printf("z: %f \n", z); // %f is a placeholder for a float
    // -> z: 2.500000

    char str[] = "A string to ouotput!\n";
    printf("str: %s", str); // %s is a placeholder for a string
    // -> str: A string to ouotput!

    printf("|||%10d|||\n", 5);  // right justified
    // -> |||         5|||

    printf("|||%-10d|||\n", 5); // left justified
    // -> |||5         |||

    printf("|||%8.2f|||\n", y); // 8 characters wide, 2 decimal places
    // -> |||    4.56|||

    printf("|||%-8.2f|||\n", z); // 8 characters wide, 2 decimal places
    // -> |||2.50    |||

    return 0;
}
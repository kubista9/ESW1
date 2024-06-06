#include <stdio.h>

// Define BIG_NUMBER with the value 99
#define BIG_NUMBER 99

// Function prototypes (declarations)
int calculator_add(int a, int b);
int calculator_subtract(int a, int b);
int calculator_multiply(int a, int b);

int main(void) {
    int a = 10;
    int b = 2;

    printf("\nHere, we add, subtract and multiply....\n\n");
    printf("%d\t+\t%d\t=\t%d\n", a, b, calculator_add(a, b));
    printf("%d\t-\t%d\t=\t%d\n", a, b, calculator_subtract(a, b));
    printf("%d\t*\t%d\t=\t%d\n", a, b, calculator_multiply(a, b));

    // Use BIG_NUMBER in a calculation
    printf("\nUsing BIG_NUMBER in calculations:\n");
    printf("%d\t+\tBIG_NUMBER\t=\t%d\n", a, calculator_add(a, BIG_NUMBER));
    printf("%d\t*\tBIG_NUMBER\t=\t%d\n", a, calculator_multiply(a, BIG_NUMBER));

    return 0;
}

// Function definitions
int calculator_add(int a, int b) {
    return a + b;
}

int calculator_subtract(int a, int b) {
    return a - b;
}

int calculator_multiply(int a, int b) {
    return a * b;
}

#include <stdio.h>

// Function to calculate x raised to the power of y
int power(int x, int y) {
    int result = 1;
    for(int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

// Function to swap the values of x, y, and z
void multiSwap(int* x, int* y, int* z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main() {
    int x = 2, y = 3, z = 4;
    
    // Demonstrating the power function
    int powResult = power(x, y);
    printf("%d raised to the power of %d is %d\n", x, y, powResult);
    
    // Demonstrating multiSwap
    printf("Original values: x = %d, y = %d, z = %d\n", x, y, z);
    multiSwap(&x, &y, &z);
    printf("After multiSwap: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

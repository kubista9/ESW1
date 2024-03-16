#include <stdio.h>

int main(){
    int array[5];
    int sum = 0;
    float average = 0.0;

    printf("Enter 5 integers: \n");
    for(int i = 0; i < 5; i++){
        // %d - denoting the integer variable
        // &array[i] - memory address of a variable
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = sum / 5.0;

    printf("Sum: %d\n", sum);
    // %.2f - for floats ( in this example 2 floating points )
    printf("Average: %.2f\n", average);

    return 0;
}
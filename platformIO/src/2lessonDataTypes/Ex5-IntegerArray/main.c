#include <stdio.h>

int main() {
    int numbers[5]; // Declare an array of integers with a size of 5
    int sum = 0;
    float average;

    // Ask the user to input 5 integers
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]); // Store integers in the array
        sum += numbers[i]; // Add the integer to the sum
    }

    // Calculate the average of the integers
    average = sum / 5.0; // Use 5.0 to perform floating point division

    // Display the sum and average of the integers
    printf("Sum of the integers: %d\n", sum);
    printf("Average of the integers: %.2f\n", average);

    return 0;
}

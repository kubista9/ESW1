#include <stdio.h>
#include <stdlib.h>  //for memory allocation adn deallocation, Malloc and free

int main() {

    // *a is a pointer to an integer that will point to the first element of the dynamically allocated array.
    int n, *a, sum = 0;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array using malloc
    //malloc is used to allocate memory for an array of n integers. the size of an int 
    a = (int*) malloc(n * sizeof(int));

    // Prompt the user to enter integer values for each element of the array
    for (int i = 0; i < n; i++) {
        printf("Enter a value for element %d: ", i);
        scanf("%d", &a[i]);
    }// Calculate the sum of all the values in the array

    for (int i = 0; i < n; i++) {
       sum += a[i];
    }

    // Print the sum of all the values in the array
    printf("The sum of the array is: %d\n", sum);
    // Free the memory allocated by malloc
    free(a);

    return 0;

}
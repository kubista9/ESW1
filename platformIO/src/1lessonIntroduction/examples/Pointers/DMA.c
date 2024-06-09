#include <stdio.h>
#include <stdlib.h>

int main(){

    //Memory allocated by malloc is not initialized, meaning it contains garbage values. 
    // If you need initialized memory, consider using calloc instead.
    int *a;
    int length = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // This allocates memory for an array of integers of size length. The sizeof(int) 
    // ensures that the correct amount of memory is allocated for each integer.
    a = malloc(length * sizeof(int));
    printf("a: %p\n", a);
    
    // Initialize the array
    for(int i = 0; i < length; i++){
        a[i] = i;
    }

    // Print the array elements
    for(int i = 0; i < length; i++){
        printf("a[%d]: %d\n", i, a[i]);
    }

    free(a);

    return 0;
}




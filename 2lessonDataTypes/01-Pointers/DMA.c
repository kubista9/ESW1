#include <stdio.h>
#include <stdlib.h>

int main(){

    //Memory allocated by malloc is not initialized, meaning it contains garbage values. 
    // If you need initialized memory, consider using calloc instead.
    int *a;
    int length = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    a = malloc(length * sizeof(int));
    printf("a: %p\n", a);
    
    for(int i = 0; i < length; i++){
        a[i] = i;
    }
    for(int i = 0; i < length; i++){
        printf("a[%d]: %d\n", i, a[i]);
    }

    free(a);

    return 0;
}




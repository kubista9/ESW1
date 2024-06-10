#include <stdio.h>
#include <stdlib.h>

int main(){

    //dynamically allocated array of size 10
    int *a = calloc(10, sizeof(int)); 
    for (int i = 0; i < 10; i++){
        a[i] = 10 - i;
    }
    for (int i = 0; i < 10; i++){
       printf("a[%d] = %d\n", i, a[i]);
    }

    printf("\na: %p\n", a);
    int *save = a; // Save the pointer to check its value after freeing
    free(a); //free the memory
    printf("save: %p\n\n",a);

    for (int i = 0; i < 10; i++){
        printf("save[%d] = %d\n", i , save[i]);
    }

    return 0;
}




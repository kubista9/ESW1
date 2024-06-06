#include <stdio.h>
#include <stdlib.h>

int main(){

    int *a = malloc(sizeof(int) * 10); //dynamically allocated array

    for (int i = 0; i < 10; i++){
        a[i] = 10 - i;
    }

    for (int i = 0; i < 10; i++){
       printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");

    printf("a: %p\n", a);

    free(a); //free the memory

    return 0;
}




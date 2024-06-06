#include <stdio.h>
#include <stdlib.h>

int main(){

    int *a = calloc(10, sizeof(int)); //dynamically allocated array (calloc initializes the memory to 0

    for (int i = 0; i < 10; i++){
        a[i] = 10 - i;
    }

    for (int i = 0; i < 10; i++){
       printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");

    printf("a: %p\n", a);

    int *save = a;
    free(a); //free the memory

printf("save: %p\n",a);
    for (int i = 0; i < 10; i++){
        printf("save[%d] = %d\n", i , save[i]);
    }

    return 0;
}




#include <stdio.h>

int main(void){

    int grade[] = {91,82,73,64,55};

    for (int i = 0; i < 5; i++){
        printf("grade[%d] = %d\n", i, grade[i]);
    }

    return 0;
}
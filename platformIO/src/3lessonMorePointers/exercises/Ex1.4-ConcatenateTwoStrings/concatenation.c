#include <stdio.h>

int main(){
    char string1[] = "Hello";
    char string2[] = "World";
    char string3[11];

    int i, j;

    for(i = 0; string1[i] != '\0'; i++){
        string3[i] = string1[i];
    } 

    for(j = 0; string2[j] != '\0'; j++){
        string3[i+j] = string2[j];
    }

    //need to null terminate string3
    string3[i+j] = '\0';

    printf("%s", string3);

    return 0;
}
#include <stdio.h>

int main(){
    setbuf(stdout, NULL);
    char text[128];

    // scanf("%[^;]", text); %[^;] instead of %[^\n]. This means scanf will capture all characters typed 
    // by the user until a semicolon (;) is encountered, at which point it stops reading further input.
    scanf("%[^\n]s",text);
    printf("You entered: %s\n", text);

    return 0;
}
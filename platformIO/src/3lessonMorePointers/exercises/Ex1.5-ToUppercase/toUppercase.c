#include <stdio.h>
#include <ctype.h> // Include ctype.h for islower() and toupper()

int main() {
    char str[] = "Hello World!";
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) { 
            str[i] = toupper(str[i]); 
        }
    }

    printf("Converted String: %s\n", str);

    return 0;
}

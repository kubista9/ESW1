#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Disable output buffer
    setbuf(stdout, NULL);
    
    printf("Please enter your name: \n");
    // %99s The 99 specifies the maximum number of characters to read, which is one less than the size of the array. 
    //This prevents buffer overflow by ensuring that at most 99 characters are read, 
    //leaving room for the null terminator (\0) at the end of the string.
    scanf("%99s", name);  // Using %99s to prevent buffer overflow

    printf("Please enter your age: \n");
    //%d: This is used to format integers
    scanf("%d", &age);  // The & is used to pass the address of the variable age

    // Output the result
    printf("Hi %s, you are %d years old.\n", name, age);

    return 0;
}

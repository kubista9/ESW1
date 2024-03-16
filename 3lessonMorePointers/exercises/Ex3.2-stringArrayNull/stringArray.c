#include <stdio.h>

int main() {
    char text[] = "The quick brown fox jumps over the lazy dog";
    char *endS = text + 39; // Assuming this is the correct length + 1 for '\0'
    printf("Original string: \"%s\"\n", text);

    // Decrement endS to truncate the string
    endS = endS - 4; // Move 4 characters back
    *endS = '\0';
    printf("After decrement by 4: \"%s\"\n", text);

    // Increment endS to attempt to 'restore' part of the string
    endS = endS + 2; // Move 2 characters forward
    *endS = '\0';
    printf("After increment by 2: \"%s\"\n", text);

    // Using prefix -- and ++ to adjust the pointer
    --endS; // Move one character back
    *endS = '\0';
    printf("After prefix decrement: \"%s\"\n", text);

    ++endS; // Move one character forward
    *endS = '\0';
    printf("After prefix increment: \"%s\"\n", text);

    return 0;
}

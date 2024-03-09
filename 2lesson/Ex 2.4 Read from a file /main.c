#include <stdio.h>

int main() {
    char c;
    FILE *fp;

    // Open the file for reading
    fp = fopen("/Users/jakubkuka/Desktop/school/4semester/ESW1/2lesson/Ex 2.3 Write to a file/file.txt", "r");
    if (fp == NULL) {
        // If the file could not be opened, print an error message and exit
        printf("Error opening file\n");
        return 1;
    }

    // Read and print the contents of the file
    while (fscanf(fp, "%c", &c) != EOF) {
        printf("%c", c);
    }

    // Print a newline for good measure
    printf("\n");

    // Close the file
    fclose(fp);

    return 0;
}

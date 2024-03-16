#include <stdio.h>

int main() {
    char text[100];
    int number;
    FILE *fp;

    printf("Please enter a string: ");
    scanf("%99s", text); // Reads a string, using %99s to prevent buffer overflow

    // Prompt user to enter a number
    printf("Please enter a number: ");
    scanf("%d", &number); // Reads an integer

    // Open a file named "file.txt" in write mode
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Write the string and number to the file
    fprintf(fp, "%s %d\n", text, number);

    // Close the file
    fclose(fp);

    printf("String and number written to file.txt\n");

    return 0;
}

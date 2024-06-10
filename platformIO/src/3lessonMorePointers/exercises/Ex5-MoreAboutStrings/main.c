#include <stdio.h>
#include "my_string_func.h"
#define MAX_LENGTH 1000

int main() {

    char line[MAX_LENGTH];
    char upper[MAX_LENGTH];
    int line_length;

    printf("Enter a line: ");
    while (read_line(line) > 0) {
        line_length = my_length(line);
        my_to_upper(line, upper);
        printf("Length: %d\t%s\n", line_length, upper);
        printf("Enter another line: ");
    }

return 0;

}
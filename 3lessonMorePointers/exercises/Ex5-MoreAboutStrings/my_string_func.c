#include <stdio.h>
#include "my_string_func.h"

/* read_line: read a line into s, return length */

int my_length(char* text){

    /* Implement this function so it returns the number of characters it is. */
    int length = 0;
    while(text[length] != '\0'){
        length++;
    }
    return length;

}

void my_to_upper(char *str_in, char *str_out) {

    /* You must implement your own version of toupper using the two strings
    str_in and str_out.
    Loop over the str_in (as long as it "contains" something).
    Look at the "current" character and check if its a lowercase letter.
    If it is, convert it to the upper case version and add that to the
    str_out character array */
    int i = 0;
    while(str_in[i] != '\0') {
        if(str_in[i] >= 'a' && str_in[i] <= 'z') {
            str_out[i] = str_in[i] - ('a' - 'A');
        } else {
            str_out[i] = str_in[i];
        }
        i++;
    }
    str_out[i] = '\0'; // Don't forget to null-terminate the string!


}

int read_line(char s[]) {
    int c = 0;
    int i = 0;
    int done = 0;
    do {
        c = getchar();
        if (c == EOF || c == '\n'){
        done = 1;
        }
        else {
            s[i++] = c;
        }
        } 
    while (!done);
    s[i] = '\0';
    return i;
}
#include <stdio.h>
#include "myStr.h"

int my_strlen(const char *str){
    int lenght = 0;
    while(str[lenght] != '\0') {
        lenght++;
    }
    return lenght;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

char *my_strcpy(char *dest, const char *src) {
    char *saved = dest;
    while ((*dest++ = *src++));
    return saved;
}

char *my_strdup(const char *str) {
    int length = my_strlen(str) + 1;  // +1 for the null terminator
    char *new_str = malloc(length);
    if (new_str == NULL) return NULL; // Return NULL if malloc fails
    my_strcpy(new_str, str);
    return new_str;
}

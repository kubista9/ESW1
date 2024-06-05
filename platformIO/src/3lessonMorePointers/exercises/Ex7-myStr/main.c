#include <stdio.h>
#include "myStr.h"

int main() {
    printf("Compare \"Hello World\" with \"Hello World\": %d\n", my_strcmp("Hello World", "Hello World"));
    printf("Compare \"Hello World\" with the empty string: %d\n", my_strcmp("Hello World", ""));
    printf("Compare two empty strings: %d\n", my_strcmp("", ""));
    printf("Compare \"Hello World\" with \"Hello, world\": %d\n", my_strcmp("Hello World", "Hello, world"));
    return 0;
}

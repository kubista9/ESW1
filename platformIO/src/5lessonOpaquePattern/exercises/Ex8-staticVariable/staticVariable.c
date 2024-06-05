#include <stdio.h>

void strange_print_func() {
    static int call_count = 0; // Static variable to keep track of the number of calls
    call_count++; // Increment the call count each time the function is called
    printf("This string is from the function, and it has been called %d times\n", call_count);
}

int main() {
    strange_print_func(); // Call the function multiple times to see the count increase
    strange_print_func();
    strange_print_func();
    return 0;
}

#include <stdio.h>

int main() {

    int intarray[] ={1,2,3,4,5}; // integer array with 5 elements
    int * pint=intarray; // A pointer pint is set to point to the first element of this array.
    char chararray [] ="1234"; // char array with 5 elements (4 chars and a \0)
    char * pchar = chararray; // A pointer pchar is set to point to the first element of this array.

    printf("chararray's first element is '%c', which is placed at address %p\n", pchar[0], pchar);
    printf("chararray's second element is '%c', which is placed at address %p\n", pchar[1], pchar+1);
    printf("So, when adding 1 to a char pointer, %d is simply added to the address. \n\n", (int)(pchar+1)-(int)pchar);
    
    printf("intarrays' first element is %d, which is placed at address %p\n", pint[0], pint);
    printf("intarrays' second element is %d, which is placed at address %p\n", pint[1], pint+1);
    printf("So, when adding 1 to an integer point, 1 is not simply added to the address. Apparently %d is added to the pointer \n\n", (int)(pint+1)-(int)pint);
    // Do the same experient with float and double.

}
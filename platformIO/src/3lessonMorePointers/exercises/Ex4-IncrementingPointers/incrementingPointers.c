#include <stdio.h>

int main() {

    int intarray[] = {1, 2, 3, 4, 5}; // integer array with 5 elements
    int *pint = intarray; // A pointer pint is set to point to the first element of this array.
    char chararray[] = "1234"; // char array with 5 elements (4 chars and a \0)
    char *pchar = chararray; // A pointer pchar is set to point to the first element of this array.
    float floatarray[] = {1.1, 2.2, 3.3, 4.4, 5.5}; // float array with 5 elements
    float *pfloat = floatarray; // A pointer pfloat is set to point to the first element of this array.
    double doublearray[] = {1.11, 2.22, 3.33, 4.44, 5.55}; // double array with 5 elements
    double *pdouble = doublearray; // A pointer pdouble is set to point to the first element of this array.

    printf("chararray's first element is '%c', which is placed at address %p\n", pchar[0], pchar);
    printf("chararray's second element is '%c', which is placed at address %p\n", pchar[1], pchar + 1);
    printf("So, when adding 1 to a char pointer, %ld is simply added to the address.\n\n", (long)(pchar + 1) - (long)pchar);
    
    printf("intarray's first element is %d, which is placed at address %p\n", pint[0], pint);
    printf("intarray's second element is %d, which is placed at address %p\n", pint[1], pint + 1);
    printf("So, when adding 1 to an integer pointer, %ld is added to the address.\n\n", (long)(pint + 1) - (long)pint);
    
    printf("floatarray's first element is %.1f, which is placed at address %p\n", pfloat[0], pfloat);
    printf("floatarray's second element is %.1f, which is placed at address %p\n", pfloat[1], pfloat + 1);
    printf("So, when adding 1 to a float pointer, %ld is added to the address.\n\n", (long)(pfloat + 1) - (long)pfloat);

    printf("doublearray's first element is %.2f, which is placed at address %p\n", pdouble[0], pdouble);
    printf("doublearray's second element is %.2f, which is placed at address %p\n", pdouble[1], pdouble + 1);
    printf("So, when adding 1 to a double pointer, %ld is added to the address.\n\n", (long)(pdouble + 1) - (long)pdouble);

    return 0;
}

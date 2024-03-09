#include <stdio.h>
#include <math.h> // Include for fmod

int main() {
    // Integer part
    int intDividend = 7;
    int intDivisor = 3;
    int intRemainder = intDividend % intDivisor;
    printf("The integer remainder of %d divided by %d is %d\n", intDividend, intDivisor, intRemainder);

    // Floating-point part
    double doubleDividend = 7.0;
    double doubleDivisor = 3.0;
    double doubleRemainder = fmod(doubleDividend, doubleDivisor); // fmod for floating-point remainder
    printf("The floating-point remainder of %.1f divided by %.1f is %.1f\n", doubleDividend, doubleDivisor, doubleRemainder);

    return 0;
}

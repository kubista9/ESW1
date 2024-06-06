#include <stdio.h>

int main() {
    int intResult = 7 / 3;
    float floatResult = 7.0 / 3.0;
    double doubleResult = 7.0 / 3.0;

    // Integer division
    printf("Integer division: 7 / 3 = %d\n", intResult);

    // Floating-point division
    printf("Floating-point division (float): 7.0 / 3.0 = %f\n", floatResult);
    printf("Floating-point division (double): 7.0 / 3.0 = %lf\n", doubleResult);

    // Modulo operation (only applicable to integers in C)
    int moduloResult = 7 % 3;
    printf("Modulo: 7 %% 3 = %d\n", moduloResult);

    // Floating-point precision problem
    float precisionProblem = 0.2f - 0.1f - 0.1f;
    printf("Precision problem: 0.2 - 0.1 - 0.1 = %f\n", precisionProblem);

    return 0;
}

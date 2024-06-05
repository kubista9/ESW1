#include <stdio.h>

int main(){
    int length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the widht of rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area of the rectangle is: %d\n", area);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct student{
    char name[30];
    int age;
};

int main(){
    struct student new_student;
    strcpy(new_student.name, "John Doe");
    new_student.age = 20;

    printf("Student Name: %s\n", new_student.name);
    printf("Student Age: %d\n", new_student.age);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef enum{
    GOOD,
    BAD
} student_type_t;

typedef struct{
    int id;
    char name[30];
    int age;
    student_type_t type;
} student_t;

bool student_isAdult(student_t student){
    if (student.age >= 18)
        return true;
    else
        return false;
}

void student_print(student_t student){
    printf("The student, %s, is an ", student.name);

    if (isAdult(student))
        printf("adult");
    else
        printf("youngster");

    printf(", and he/she is a ");

    if (student.type == GOOD)
        printf("good");
    else
        printf("bad");

    printf(" student. \n\n");
}

int main(){
    student_t nerd;
    nerd.id = 1;
    strcpy(nerd.name, "John");
    nerd.age = 20;
    nerd.type = GOOD;
    student_print(nerd);
}

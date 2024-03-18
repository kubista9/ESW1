#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char name[30];
    int age;
} student_t;

void student_PrintInfo(student_t student){
    printf("Student's name: %s\n", student.name);
};

bool student_isAdult(student_t student){
    if (student.age >= 18)
    {
        return true;
    }
    else return false;   
}

int main(){
    student_t newStudent = {"John Doe", 20};
    student_PrintInfo(newStudent);
    student_isAdult(newStudent);   

    return 0;
}
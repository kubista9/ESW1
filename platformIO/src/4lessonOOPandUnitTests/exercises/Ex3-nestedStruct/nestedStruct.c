#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct person_t{
    char name[30];
    int age;
};

typedef struct{
    struct person_t personal_details;
    int student_id;
    char major[50];
} student_t;

struct teacher_t{
    struct person_t personal_details;
    int employee_id;
    char subject[50];
};

void print_student(student_t student) {
    printf("Student Name: %s\n", student.personal_details.name);
    printf("Student Age: %d\n", student.personal_details.age);
    printf("Student ID: %d\n", student.student_id);
    printf("Student Major: %s\n", student.major);
}

void print_teacher(struct teacher_t teacher) {
    printf("Teacher Name: %s\n", teacher.personal_details.name);
    printf("Teacher Age: %d\n", teacher.personal_details.age);
    printf("Employee ID: %d\n", teacher.employee_id);
    printf("Subject: %s\n", teacher.subject);
}

int main(){

    student_t student = {
        .personal_details = {"adam",45},
        .student_id = 111,
        .major = "Software engineering"
    };

    struct teacher_t teacher = {
        .personal_details = {"jakub",22},
        .employee_id = 124,
        .subject = "Engineering"
    };

    print_student(student);
    print_teacher(teacher);

    return 0;
}
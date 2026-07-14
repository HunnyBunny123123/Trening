#include <stdio.h>
#include <string.h>
struct student_struct
{
    char name[50];
    int age;
    double grade;
};

int main(){
    double sum = 0;
    double avg = 0;
    int bestIndex = 0;
    struct student_struct students[3];
    students[0].age = 16;
    students[0].grade = 100;
    strcpy(students[0].name, "Miha");

    students[1].age = 20;
    students[1].grade = 68;
    strcpy(students[1].name, "Ava");

    students[2].age = 22;
    students[2].grade = 88;
    strcpy(students[2].name, "Michael");

     int length = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < length; i = i + 1) {
        printf("%s, %d, %.2f \n", students[i].name, students[i].age, students[i].grade);
        sum = sum + students[i].grade;
        if(students[bestIndex].grade > students[i].grade){
            bestIndex = i;
        }
    }
    avg = sum / length;
    printf("Average grade: %.2f\n", avg);
    printf("Best index: %d and the index grade is : %.2f and the name of the student: %s",bestIndex, students[bestIndex].grade, students[bestIndex].name);
    return 0;
    
}
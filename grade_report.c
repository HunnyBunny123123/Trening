#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE*fptr;
    int highestGrade;
    char bestName[100];
    char name[100];
    int grade;
    int count = 0;
    int sum = 0;
    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
      printf("Could not open file\n");
      return 1;
    }
    while (fscanf(fptr, "%99s %d", name, &grade) == 2){
        if (count == 0) {
            highestGrade = grade;
            strcpy(bestName, name);
        } else if (grade > highestGrade) {
            highestGrade = grade;
            strcpy(bestName, name);
        }
        printf("%s %d\n", name, grade);
        sum = sum + grade;
        count = count + 1;
    }
    double average = (double)sum / count;
    printf("Students: %d\n", count);
    printf("Average: %.2f\n", average);
    printf("Best student: %s\n", bestName);
    printf("Highest grade: %d\n", highestGrade);
    fclose(fptr);
    return 0;
}
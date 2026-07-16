#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE*fptr;
    char name[100];
    int grade;
    fptr = fopen("students.txt", "a");
    if (fptr == NULL) {
      printf("Could not open file\n");
      return 1;
    }
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Name: %s\n", name);
    printf("Enter the grade: ");
    scanf("%d", &grade);

    fprintf(fptr, "%s %d\n", name, grade);
    fclose(fptr);

    return 0;
}
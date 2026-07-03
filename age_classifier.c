#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age <= 12 && age > -1){
        printf("child\n");
    } else if (age > 12 && age < 18){
        printf("teenager\n");
    } else if (age > 17 && age < 65){
        printf("adult\n");
    } else if (age > 64){
        printf("senior\n");
    } else {
        printf("invalid age\n");
    }
    return 0;
}
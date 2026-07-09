#include <stdio.h>
void set_to_30(int *ptr)
int main(){
    int age = 25;
    int *agePtr = &age;
    *agePtr = 30;
    printf("%d\n", age);
    printf("Pointer stores address: %p\n", (void *)agePtr);
    printf("Value through pointer: %d\n", *agePtr);
    return 0;
}
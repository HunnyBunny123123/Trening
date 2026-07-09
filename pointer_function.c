#include <stdio.h>
void set_to_30(int *ptr){
    *ptr = 30;
}
int main(){
    int age = 25;
    printf("Before %d\n", age);
    int *agePtr = &age;
    set_to_30(agePtr);
    printf("After %d\n", age);

    printf("Pointer stores address: %p\n", (void *)agePtr);
    printf("Value through pointer: %d\n", *agePtr);
    return 0;
}
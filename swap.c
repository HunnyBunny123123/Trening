#include <stdio.h>
void swap(int *ptr1, int *ptr2 ){
    int temp = *ptr1;
    *ptr1 = *ptr2; 
    *ptr2 = temp;
}
int main(){
    int a = 25;
    int b = 10;
    printf("Before %d %d\n", a, b);
    
    swap(&a, &b);
    printf("After %d %d\n", a, b);
    return 0;
}
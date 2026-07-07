#include <stdio.h>
    double add(double a, double b){
        return a + b;
    }
    double subtract(double a, double b){
        return a - b;
    }
    double multiply(double a, double b){
        return a * b;
    }
    double divide(double a, double b){
        return a / b;
    }

int main(){
    double a;
    double b;
    char op;
    printf("Enter your first number: ");
    scanf("%lf", &a);
    printf("Enter your Second number: ");
    scanf("%lf", &b);
    printf("Enter your Operation (+ - * /): ");
    scanf(" %c", &op);


    printf("Result: ");
    if (op == '+') {
        printf("%.2f\n", add(a, b));
    }else if(op == '-'){
        printf("%.2f\n", subtract(a, b));
    }else if (op == '*'){
        printf("%.2f\n", multiply(a, b));
    }else if(op == '/'){
        if (b == 0){
            printf("Cannot divide by zero\n");
        }else {
            printf("%.2f\n", divide(a, b));
        }
    }else {
        printf("invalid");
    }
}
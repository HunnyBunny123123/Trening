#include <stdio.h>
int main() {
    double celsius = 2.8;
    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("Celsius: %.2f, Fahrenheit: %.2f\n", celsius, fahrenheit);
    double kilometers = 100;
    double miles = kilometers * 0.621371;
    printf("Kilometers: %.2f, Miles: %.2f\n", kilometers, miles);
    return 0;   
}
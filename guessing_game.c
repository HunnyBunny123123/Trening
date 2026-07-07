#include <stdio.h>
int main(){
    int secret = 55;
    int guess = 0;
    int attempts = 0;
    int guessed = 0;
    do{
        printf("Enter your guess: ");
        attempts = attempts + 1;
        scanf("%d", &guess);
        if(guess == secret){
            printf("Congratulations you guessed in: %d attempts\n", attempts);  
            guessed = 1;
        }else if(guess > secret){
            printf("Wrong too high try again\n");
        }else if(guess < secret){
            printf("Wrong too low try again\n");
        }
    }while(guessed == 0 && attempts < 5);
    
    if(attempts == 5 && guessed == 0){
        printf("Too many attempts reached");
    }
    return 0;

}
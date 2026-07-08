#include <stdio.h>

#define MAX_GRADES 100

int main(){
    int userInput;
    int sum = 0;
    int min;
    int max;
    int passing = 0;
    int grades[MAX_GRADES];
    printf("Enter how many grades you want to enter: ");
    scanf("%d", &userInput);
    while (userInput <= 0 || userInput > MAX_GRADES) {
      printf("Invalid count. Enter a number from 1 to %d: ",
      MAX_GRADES);
      scanf("%d", &userInput);
    }

    for(int i = 0; i < userInput; i = i + 1){
        printf("Please enter your %d st grade: ", i);
        scanf("%d", &grades[i]);
        while (grades[i] < 0 || grades[i] > 100){
            printf("Please enter a value between 0-100: ");
            scanf("%d", &grades[i]);
        }
        
    }
    min = grades[0];
    max = grades[0];
    for(int j = 0; j < userInput; j = j + 1){
        printf("Grade num %d is %d\n", j, grades[j]);
        sum = sum + grades[j];
        if(min > grades[j]){
            min = grades[j];
        }
        if(max < grades[j]){
            max = grades[j];
        }
        if(grades[j] >= 60){
            passing = passing + 1;
        }
    }
    printf("Average is: %.2f\n", sum/userInput);
    printf("Maximum is: %d\n", max);
    printf("Minimum is: %d\n", min);
    printf("Passing grades are: %d\n", passing);

    return 0;

}


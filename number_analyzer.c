#include <stdio.h>
int main() { 
  int count;
  int avg;
  int sum = 0;
  int min;
  int max;
  int numbers;
  int myNumbers[100];

  printf("How many numbers? ");
  scanf("%d", &numbers);

  if (numbers <= 0 || numbers > 100) {
      printf("Invalid count\n");
      return 1;
  }

  for (count = 0; count < numbers; count = count + 1) {
      printf("Enter number %d: ", count + 1);
      scanf("%d", &myNumbers[count]);
  }

  for(count = 0; count < numbers; count = count +1){
    sum = sum + myNumbers[count];
    
  }
  avg = sum / numbers;
  min = myNumbers[0];
  max = myNumbers[0];
  for(count = 0; count < numbers; count = count +1){
   if(max < myNumbers[count]){
    max = myNumbers[count];
   }
   if(min > myNumbers[count]){
    min = myNumbers[count];
   }
  }
  printf("Sum: %d\n", sum);
  printf("Average: %d\n", avg);
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  return 0;
}
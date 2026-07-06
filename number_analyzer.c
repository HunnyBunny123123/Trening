#include <stdio.h>
int main() { 
  int count;
  double avg;
  int sum = 0;
  int min;
  int max;
  int numbers;
  int myNumbers[100];
  int evenCount = 0;
  int negativeCount = 0;
  int result = 0;
  printf("How many numbers? ");
   result = scanf("%d", &numbers);

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
  avg = (double) sum / numbers;
  min = myNumbers[0];
  max = myNumbers[0];
  for(count = 0; count < numbers; count = count +1){
   if(max < myNumbers[count]){
    max = myNumbers[count];
   }
   if(min > myNumbers[count]){
    min = myNumbers[count];
   }
     if (myNumbers[count] % 2 == 0) {
      evenCount = evenCount + 1;
  }

  if (myNumbers[count] < 0) {
      negativeCount = negativeCount + 1;
  }
  }

  printf("Sum: %d\n", sum);
  printf("Average: %.2f\n", avg);
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  printf("Even numbers: %d\n", evenCount);
  printf("Negative numbers: %d\n", negativeCount);
  return 0;
}
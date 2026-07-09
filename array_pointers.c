  #include <stdio.h>

  int main() {
      int numbers[] = {10, 20, 30, 40, 50};

      printf("numbers[0]: %d\n", numbers[0]);
      printf("*numbers: %d\n", *numbers);

      printf("&numbers[0]: %p\n", (void *)&numbers[0]);
      printf("numbers: %p\n", (void *)numbers);

      return 0;
  }
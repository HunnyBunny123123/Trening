#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE*fptr;

    fptr = fopen("message.txt", "w+");
    if (fptr == NULL) {
      printf("Could not open file\n");
      return 1;
    }
    fprintf(fptr, "%s", "Hello from C\n This file was written by fprintf\n Files keep data after the program exits");
    fclose(fptr);

    return 0;
}
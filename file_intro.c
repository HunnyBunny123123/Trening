#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE*fptr;
    char line[100];
    fptr = fopen("message.txt", "w+");
    if (fptr == NULL) {
      printf("Could not open file\n");
      return 1;
    }
    fprintf(fptr, "%s", "Hello from C\n This file was written by fprintf\n Files keep data after the program exits");
    fclose(fptr);

    fptr = fopen("message.txt", "r");

    if (fptr == NULL) {
        printf("Could not open file for reading\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}
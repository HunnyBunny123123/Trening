#include <stdio.h>
#include <string.h>

int main(){
    char firstName[50];
    char lastName[50];

    fgets(firstName, sizeof(firstName), stdin);
    fgets(lastName, sizeof(lastName), stdin);

    firstName[strcspn(firstName, "\n")] = '\0';
    lastName[strcspn(lastName, "\n")] = '\0';

    printf("Full name: %s %s\n", firstName, lastName);
    printf("Initials: %c %c\n", firstName[0], lastName[0]);
    printf("Lenght of firstname: %zu, length of lastname: %zu\n", strlen(firstName), strlen(lastName));
    if(strcmp(firstName, "Miha") == 0){
        printf("Found the special name: \n");
    }
    return 0;


}
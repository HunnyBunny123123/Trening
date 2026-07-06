
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your first name: ");
    fgets(name, sizeof(name), stdin);

    printf("Name: %s\n", name);
    printf("First character: %c\n", name[0]);
    printf("Length: %zu\n", strlen(name));

    return 0;
}
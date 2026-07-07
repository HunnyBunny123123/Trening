
#include <stdio.h>
#include <string.h>

int main() {
    int vowels = 0; 
    char name[50];
    
    printf("Enter your first name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Name: %s\n", name);
    printf("First character: %c\n", name[0]);
    printf("Length: %zu\n", strlen(name));
    for (int i = 0; name[i] != '\0'; i = i + 1) {
      printf("Character %d: %c\n", i, name[i]);
      char c = name[i];
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        vowels = vowels + 1;
      }
    }
    
    printf("Vowels: %d\n", vowels);



    int length = strlen(name);
    for(int i = length - 1; i >= 0; i = i - 1){
      printf("%c", name[i]);
    }










    return 0;
}
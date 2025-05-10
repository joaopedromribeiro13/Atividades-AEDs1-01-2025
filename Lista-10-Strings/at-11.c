#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i;
    
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';
    printf("Vogais encontradas: ");
    for(i = 0; i < strlen(texto); i++) {
        char c = texto[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c ", c);
        }
    }
    printf("\n");    
return 0;
}
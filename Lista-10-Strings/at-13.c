#include <stdio.h>

int main() {
    char texto[100];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    for(i = 0; texto[i] != '\0'; i++) {
        if(texto[i] >= 'A' && texto[i] <= 'Z') {
            contador++;
        }
    }
    printf("Quantidade de caracteres maiusculos: %d\n", contador);
return 0;
}
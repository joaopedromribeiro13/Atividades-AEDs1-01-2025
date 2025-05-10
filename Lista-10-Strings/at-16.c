#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i;
    int apenas_digitos = 1;
    int apenas_letras = 1;   

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    for(i = 0; texto[i] != '\0'; i++) {
        if(texto[i] < '0' || texto[i] > '9') {
            apenas_digitos = 0;
        }

        if(!((texto[i] >= 'A' && texto[i] <= 'Z') || 
            (texto[i] >= 'a' && texto[i] <= 'z'))) {
            apenas_letras = 0;
        }
    }

    if(strlen(texto) == 0) {
        apenas_digitos = 0;
        apenas_letras = 0;
    }

    if(apenas_digitos) {
        printf("A string contem apenas digitos numericos (0-9).\n");
    } else {
        printf("A string NAO contem apenas digitos numericos.\n");
    }

    if(apenas_letras) {
        printf("A string contem apenas letras (A-Z, a-z).\n");
    } else {
        printf("A string NAO contem apenas letras.\n");
    }

    return 0;
}
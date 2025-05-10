#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i, tamanho;
    int palindromo = 1;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);

    tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }

    for (i = 0; i < tamanho / 2; i++) {
        if (texto[i] != texto[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("'%s' eh um palindromo!\n", texto);
    } else {
        printf("'%s' nao eh um palindromo.\n", texto);
    }
return 0;
}
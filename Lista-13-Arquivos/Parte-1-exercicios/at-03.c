#include <stdio.h>
#include <string.h>  // Só para usar strlen

int main() {
    FILE *arquivo;
    char frase[100];

    arquivo = fopen("frases.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    printf("Digite frases (uma por linha). Digite FIM para terminar:\n");

    do {
        gets(frase);  // Lê a frase digitada

        if (!(frase[0] == 'F' && frase[1] == 'I' && frase[2] == 'M' && strlen(frase) == 3)) {
            fprintf(arquivo, "%s\n", frase);  // Escreve no arquivo
        }

    } while (!(frase[0] == 'F' && frase[1] == 'I' && frase[2] == 'M' && strlen(frase) == 3));

    fclose(arquivo);
    printf("Frases gravadas com sucesso!\n");

    return 0;
}

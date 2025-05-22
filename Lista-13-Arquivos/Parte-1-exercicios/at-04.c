#include <stdio.h>
#include <string.h>  

int main() {
    FILE *arquivo;
    char frase[100];
    int contLinhas = 0;

    arquivo = fopen("frases.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita\n");
        return 1;
    }

    printf("Digite frases (uma por linha). Digite FIM para terminar:\n");

    do {
        gets(frase);  

        if (!(frase[0] == 'F' && frase[1] == 'I' && frase[2] == 'M' && strlen(frase) == 3)) {
            fprintf(arquivo, "%s\n", frase);
        }

    } while (!(frase[0] == 'F' && frase[1] == 'I' && frase[2] == 'M' && strlen(frase) == 3));

    fclose(arquivo);  

    arquivo = fopen("frases.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura\n");
        return 1;
    }

    printf("\nFrases lidas do arquivo:\n");

    while (fgets(frase, sizeof(frase), arquivo) != NULL) {
        printf("%s", frase);
        contLinhas++;
    }

    fclose(arquivo);
    printf("\nTotal de linhas: %d\n", contLinhas);

    return 0;
}

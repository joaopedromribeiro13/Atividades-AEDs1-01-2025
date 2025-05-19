#include <stdio.h>

int main() {
    FILE *arquivo = fopen("exemplo.txt", "a");
    fprintf(arquivo, "Nova linha adicionada.\n");

    char linha[100];
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (fgets(linha, 100, arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
return 0;
}

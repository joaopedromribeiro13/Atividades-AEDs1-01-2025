#include <stdio.h>

int main() {
    FILE *arquivo;
    int numeros[5] = {10, 20, 30, 40, 50};
    int lidos[5];

    arquivo = fopen("numeros.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo binário.\n");
        return 1;
    }

    fwrite(numeros, sizeof(int), 5, arquivo);
    fclose(arquivo);

    arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo binário.\n");
        return 1;
    }

    fread(lidos, sizeof(int), 5, arquivo);
    fclose(arquivo);

    printf("Valores lidos do arquivo binário:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", lidos[i]);
    }
    printf("\n");

    return 0;
}

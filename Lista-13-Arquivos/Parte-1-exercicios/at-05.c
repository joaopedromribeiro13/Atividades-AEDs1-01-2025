#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    float nota;

    arquivo = fopen("notas.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo notas.txt\n");
        return 1;
    }

    printf("Notas dos alunos:\n");

    while (fscanf(arquivo, "%s %f", nome, &nota) == 2) {
        printf("Nome: %s, Nota: %.1f\n", nome, nota);
    }

    fclose(arquivo);
    return 0;
}

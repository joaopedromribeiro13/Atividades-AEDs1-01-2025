#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "r");
    char nome[50];
    int idade;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura\n");
        return 1;
    }

    while(fscanf(arquivo, "%s %d", nome, &idade) == 2) {
        printf("Nome: %s, Idade: %d\n", nome, idade);
    }

fclose(arquivo);
return 0;
}
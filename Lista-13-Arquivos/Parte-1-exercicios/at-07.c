#include <stdio.h>

int main() {
    char nomeArquivo[100];

    printf("Digite o nome do arquivo que deseja remover: ");
    scanf("%s", nomeArquivo);

    if (remove(nomeArquivo) == 0) {
        printf("Arquivo removido com sucesso.\n");
    } else {
        printf("Erro ao remover o arquivo. Verifique se ele existe.\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    char estiloMusical[31];
    int numeroIntegrantes;
    int posicaoRanking;
} Banda;

// Função para verificar se uma banda está entre as favoritas
void verificaBandaFavorita(Banda bandas[], int tamanho) {
    char nomeBusca[51];
    int encontrada = 0;

    printf("\nDigite o nome da banda que deseja buscar: ");
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; // remove \n

    for (int i = 0; i < tamanho; i++) {
        if (strcmp(nomeBusca, bandas[i].nome) == 0) {
            encontrada = 1;
            break;
        }
    }

    if (encontrada) {
        printf(">>> %s está entre suas bandas favoritas!\n", nomeBusca);
    } else {
        printf(">>> %s NÃO está entre suas bandas favoritas.\n", nomeBusca);
    }
}

int main() {
    Banda bandas[5];

    for (int i = 0; i < 5; i++) {
        printf("\n--- Banda %d ---\n", i + 1);

        printf("Nome da banda: ");
        fgets(bandas[i].nome, sizeof(bandas[i].nome), stdin);
        bandas[i].nome[strcspn(bandas[i].nome, "\n")] = '\0'; // remove \n

        printf("Estilo musical: ");
        fgets(bandas[i].estiloMusical, sizeof(bandas[i].estiloMusical), stdin);
        bandas[i].estiloMusical[strcspn(bandas[i].estiloMusical, "\n")] = '\0'; // remove \n

        printf("Número de integrantes: ");
        scanf("%d", &bandas[i].numeroIntegrantes);

        printf("Posição no ranking: ");
        scanf("%d", &bandas[i].posicaoRanking);

        getchar(); // limpa o '\n' deixado pelo scanf
    }

    printf("\n===== Bandas Cadastradas =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nBanda %d\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Estilo Musical: %s\n", bandas[i].estiloMusical);
        printf("Número de Integrantes: %d\n", bandas[i].numeroIntegrantes);
        printf("Posição no Ranking: %d\n", bandas[i].posicaoRanking);
    }

    // Chamada da função de busca
    verificaBandaFavorita(bandas, 5);

    return 0;
}

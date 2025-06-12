#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    char estiloMusical[31];
    int numeroIntegrantes;
    int posicaoRanking;
} Banda;

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

    return 0;
}

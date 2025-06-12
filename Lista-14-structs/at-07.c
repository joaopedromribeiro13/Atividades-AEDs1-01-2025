#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} ponto2d;

// Função para calcular a distância entre dois pontos
float calcularDistancia(ponto2d p1, ponto2d p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt((dx * dx) + (dy * dy));
}

int main() {
    ponto2d ponto_inicial = {0, 0};
    ponto2d ponto_final = {0, 0};
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Digitar os valores do ponto inicial\n");
        printf("2. Digitar os valores do ponto final\n");
        printf("3. Calcular e exibir a distância entre os dois pontos\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor de x do ponto inicial: ");
                scanf("%f", &ponto_inicial.x);
                printf("Digite o valor de y do ponto inicial: ");
                scanf("%f", &ponto_inicial.y);
                break;

            case 2:
                printf("Digite o valor de x do ponto final: ");
                scanf("%f", &ponto_final.x);
                printf("Digite o valor de y do ponto final: ");
                scanf("%f", &ponto_final.y);
                break;

            case 3:
                printf("Distância entre os pontos: %.2f\n",
                       calcularDistancia(ponto_inicial, ponto_final));
                break;

            case 4:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while(opcao != 4);

    return 0;
}

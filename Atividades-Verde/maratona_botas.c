#include <stdio.h>

int main() {
    int N, M;
    char L;
    int botasD[61] = {0};
    int botasE[61] = {0};
    int pares = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %c", &M, &L);
        if (L == 'D') {
            botasD[M]++;
        } else if (L == 'E') {
            botasE[M]++;
        }
    }

    for (int tamanho = 30; tamanho <= 60; tamanho++) {
        int minimo = (botasD[tamanho] < botasE[tamanho]) ? botasD[tamanho] : botasE[tamanho];
        pares += minimo;
    }

    printf("%d\n", pares);

    return 0;
}
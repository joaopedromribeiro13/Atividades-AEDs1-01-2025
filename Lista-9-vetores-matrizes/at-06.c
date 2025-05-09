#include <stdio.h>

int main() {
    int matriz[2][3], MatrizTransposta[3][2], soma=0;
    printf("\nDigite os valores da matriz:\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("Digite o valor para a posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            soma+=matriz[linha][coluna];//soma
        }
    }
    // A) Mostrar a matriz original no formato de tabela.
    printf("\nMatriz original:\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    // B) Criar uma nova matriz chamada matrizTransposta e exibir a transposta (ou seja, uma matriz 3 × 2).

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            MatrizTransposta[coluna][linha]=matriz[linha][coluna];
        }
    }

    printf("\nMatriz Transposta:\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("%d ", MatrizTransposta[linha][coluna]);
        }
        printf("\n");
    }

    printf("A soma dos elementos da matriz eh: %d", soma);
return 0;
}
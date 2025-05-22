#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pi = (int *)malloc(sizeof(int));
    float *pf = (float *)malloc(sizeof(float));
    char *pc = (char *)malloc(sizeof(char));

    if (pi == NULL || pf == NULL || pc == NULL) {
        printf("Erro na alocação de memória.\n");
        free(pi); free(pf); free(pc);
        return 1;
    }

    printf("Digite um inteiro: ");
    scanf("%d", pi);
    printf("Digite um float: ");
    scanf("%f", pf);
    printf("Digite um char: ");
    scanf(" %c", pc);

    printf("\nValores:\n");
    printf("Inteiro: %d (endereço: %p)\n", *pi, (void *)pi);
    printf("Float: %.2f (endereço: %p)\n", *pf, (void *)pf);
    printf("Char: %c (endereço: %p)\n", *pc, (void *)pc);

    free(pi);
    free(pf);
    free(pc);

    return 0;
}

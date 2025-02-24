#include <stdio.h>

int main(void)
{
    int num1, num2, dif, divisao;

    printf("Digite os dois números:\n");
    scanf("%d %d", &num1, &num2);

    dif =  num1 - num2;
    printf("a diferença he %d\n", dif);

    if (num2 != 0)
    {
        divisao = num1/num2;
        printf("A divisão de %d por %d é: %d\n", num1, num2, divisao);
    }
return 0;
}

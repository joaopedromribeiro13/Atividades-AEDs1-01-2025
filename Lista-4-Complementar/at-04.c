#include <stdio.h>

int main() {
    int opcao, num1, num2, resultado;

    do{
        printf("\nMenu de Operacoes Matematicas\n");
        printf("1. Somar dois numeros\n");
        printf("2. Subtrair dois numeros\n");
        printf("3. Multiplicar dois numeros\n");
        printf("4. Dividir dois numeros\n");
        printf("5. Sair\n");
        printf("Digite um dos numeros acima:");
        scanf("%d", &opcao);

        if(opcao>=1 && opcao<=4) {
            printf("Digite o primeiro e o segundo numero\n");
            scanf("%d %d", &num1, &num2);
        }

        switch(opcao) {
            case 1:
                resultado=num1+num2;
                printf("O resultado eh: %d", resultado);
                break;
            case 2:
                resultado=num1-num2;
                printf("O resultado eh: %d", resultado);
                break;
            case 3:
                resultado=num1*num2;
                printf("O resultado eh: %d", resultado);
                break;
            case 4:
                if(num2 != 0) {
                    resultado=num1/num2;
                    printf("O resultado eh: %d", resultado);
                } else {
                    printf("Opcao invalida");
                }
                break;
            case 5:
                printf("Saindo do programa...");
                break;
        }
    } while(opcao != 5);
return 0;
}

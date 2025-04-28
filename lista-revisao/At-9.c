#include <stdio.h>

int main() {
    int n, soma = 0;
    do {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if((n%4 == 0) && (n%6 == 0)) {
            soma = soma + 1;   
        }

    } while(n!= -1);
    
printf("%d", soma);
return 0;
}
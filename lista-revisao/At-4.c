#include<stdio.h>

int main() {
    int n, somador=0;
    do {
        printf("Escreva um numero inteiro:\n");
        printf("Digite 0 quando quiser parar.\n");
        scanf("%d", &n);
        
        if(n%4==0 && n%6 != 0) {
            somador=somador+1;
        }
    } while(n!=0);
    
    printf("O total de multiplos de 4 e nao multiplos de 6 eh: %d", somador);
    
}
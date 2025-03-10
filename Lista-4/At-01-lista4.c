#include <stdio.h>

int main(){

int n, num, soma=0;
printf("digite n: ");
scanf("%d", &n);

    while(n>0){
    printf("digite um numero: ");
    scanf("%d", &num);
    soma=soma+num;
    n=n-1;
    }
    printf("O somatorio eh: %d", soma);
}

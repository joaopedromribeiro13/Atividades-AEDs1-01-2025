#include <stdio.h>

void numNaturais(int vetor[]) {
    int num=1;
    int i=0;

    while(i < 100){
        if((num%6!=0) && (num%10!=6)) {
            vetor[i]=num;
            i++;
        }
        num++;
    }
}

int main() {
    int vetor[100];

    numNaturais(vetor);

    printf("Os 100 primeiros numeros naturais que nao sao multiplos de 6 e que nao terminam com 6 sao: \n");

    for (int i = 0; i < 100; i++){
        printf("%d\n", vetor[i]);
    }
return 0;
}
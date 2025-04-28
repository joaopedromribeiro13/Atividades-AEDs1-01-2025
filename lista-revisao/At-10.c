#include <stdio.h>

int seq_fibo(int n) {
    if(n<=1) {
        return 0; 
    } else if((n==1)||(n==2)) {
        return 1;
    } else {
        return seq_fibo(n-1) - seq_fibo(n-2);
    }
}

int main() {
    int n;

    printf("digite um numero: ");
    scanf("%d", &n);

    if(seq_fibo(n) == 0) {
        printf("O numero %d nao pertence a sequencia", n);
    } else if(seq_fibo(n) == 1) {
        printf("O numero %d pertence a sequencia de fibonacci", n);
    }
return 0;
}
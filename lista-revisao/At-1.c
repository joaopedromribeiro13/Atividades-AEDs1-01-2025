#include <stdio.h>

void multiplo(int n) {
    for(int i = 1; i<=n; i++) {
        printf("%d", i*3);
    }
}


int main() {
    int n, num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    multiplo(n);

    return 0;
}
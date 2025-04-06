#include <stdio.h>

void multiplo(int n) {
    for(int i = 1; i<=n; i++) {
        printf("%d ", i*3);
    }
    return;
}


int main() {
    int n;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    multiplo(n);

    return 0;
}
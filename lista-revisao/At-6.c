#include <stdio.h>

float Somatorio(int n) {
    float soma=0;

    for(int den=1; den<=n; den++) {
        soma = soma + 1.0/den;
    }
    return soma;
}

int main() {
    int n;

    printf("Digite um numero:");
    scanf("%d", &n);

    printf("O valor da soma eh: %.2f", Somatorio(n));

}
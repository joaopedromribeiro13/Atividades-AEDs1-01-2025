#include <stdio.h>

float Somatorio(int n) {
    float soma=0;

    for(int den=1; den<=n; den++) {
        int termo;
        termo = 1.0/den;

        if(den%2 == 0) {
            termo = termo * (-1);
        }
        soma+=termo;
    }
    return soma;
}

int main() {
    int n;

    printf("Digite um numero:");
    scanf("%d", &n);

    printf("O valor da soma eh: %.2f", Somatorio(n));

}
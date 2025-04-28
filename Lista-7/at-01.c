#include <stdio.h>

void troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
int num1, num2;

printf("digite dois numeros: ");
scanf("%d %d", &num1, &num2);

troca (&num1, &num2);

printf("%d %d", num1, num2);
}
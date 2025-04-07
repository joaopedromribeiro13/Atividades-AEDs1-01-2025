#include <stdio.h>

int PotRecursiva(int b, int e) {
    if(e == 0) {
        return b;
    } else {
        return b*PotRecursiva(b, e-1);
    }
}

int main() {
    int b, e;

    printf("Digite um numero: ");
    scanf("%d", &b);
    printf("Digite a potencia: ");
    scanf("%d", &e);
    
    printf("A potencia %d sobre %d eh: %d", b, e, PotRecursiva(b,e));
}
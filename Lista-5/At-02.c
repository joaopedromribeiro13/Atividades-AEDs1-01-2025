#include <stdio.h>

int par(int n) {
    return 2*n;
}

void mostrarEmOrdemDecrescente(int n) {
     int termo;
     for(int i=n; i>0; i--) {
        termo = par(i);
        if(termo < n) {
            printf("%d", termo);
        }
    }
      return;
}

int main() {
    int n;
    printf("Qual eh o numero:");
    scanf("%d", &n);
    printf("A sequencia e:\n");

    mostrarEmOrdemDecrescente(n);

    return 0;
}

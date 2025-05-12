#include <stdio.h>
int main() {
    int copias=0;
    float valor;

    while(copias != -1) {
        scanf("%d", &copias);
        if(copias == -1){
            break;
        }
        if(copias<=100) {
            valor=copias*0.25;
            printf("%.2f\n", valor);
        } else {
            valor=copias*0.20;
            printf("%.2f\n", valor);
        }
    }
return 0;
}
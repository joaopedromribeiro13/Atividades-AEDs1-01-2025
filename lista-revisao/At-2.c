#include <stdio.h>

int main() {
    int x, y, naoimp=0;

    printf("Escreva x e y(x<y):");
    scanf("%d %d", &x, &y);

    if(x>y) {
        printf("Digite um numero em X menor que em Y.");
    } else {
        for(int i=x; i<=y; i++) {
            if(i%2 != 0) {
                printf("%d ", i);
                naoimp = 1;   
            }
        }
        if(!naoimp) {
            printf("Nao tem numeros impares.\n");
        } 
    }
    return 0;
}
#include <stdio.h>

int main() {
    int x, y;

    printf("Escreva x e y(x<y):");
    scanf("%d %d", &x, &y);

    if(x>y) {
        printf("Digite um numero em X menor que em Y.");
    } else {
        for(int i=x; i<=y; i++) {
            while(i%2 != 0 || i==x || i==y) {
                printf("%d ", i);
                i++;
            }
        }
    }


    /*terminar o while que está com problema ao dar output com um numero 
        a mais depois de Y*/
    

    return 0;
}
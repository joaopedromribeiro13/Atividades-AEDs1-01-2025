#include <stdio.h>

int main() {
    int x, y;

    do {
        printf("digite x e y:");
        scanf("%d%d", &x, &y);
            if(x != 0 && y != 0) {
                if(x>0 && y>0){
                    printf("Primeiro quadrante\n");
                } else if(x<0 && y>0){
                    printf("Segundo quadrante\n");
                } else if(x<0 && y<0){
                    printf("terceiro quadrante\n");
                } else {
                    printf("Quarto quadrante\n");
                }
            }
    } while (x != 0 && y != 0);
}

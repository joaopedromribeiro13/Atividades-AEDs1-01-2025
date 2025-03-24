#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo:");
    scanf("%d", &n);

    for(int a=n; a>=1; a--) {
        for(int b=1; b<=a; b++) {
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;

}

#include <stdio.h>

int retornaMaior(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);

    printf("O maior numero eh: %d", retornaMaior(a, b));
}
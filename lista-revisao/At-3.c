#include <stdio.h>

int SomaDivisores(int num) {
    int soma = 0;

    for( int i=1; i<num; i++) {
        if(num%i == 0) {
            soma += i; 
        }
    }
    return soma;
}


int main() {
    int num;
    scanf("%d", &num);

    printf("%d", SomaDivisores(num));

}
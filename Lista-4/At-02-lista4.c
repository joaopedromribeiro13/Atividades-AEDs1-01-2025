#include <stdio.h>

int main(){
int n,soma=0, numImp;


    printf("digite n: ");
    scanf("%d", &n);
    n=n*2;
    while(soma<n){
    soma++;
        if(soma % 2 != 0){
            printf("%d\n", soma);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n=10, *vetor;

    vetor=(int*) malloc(n*sizeof(int));
    if(vetor==NULL) {
        printf("ERRO");
        return 1;
    }
    for(int i=0; i<n; i++) {
        scanf("%d", (vetor+i));
    }
    for(int i=0; i<n; i++) {
        printf("%d ", *(vetor+i));
    }
return 0;
}
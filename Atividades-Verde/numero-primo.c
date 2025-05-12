#include <stdio.h>

int main() {
    int numInicial, numFinal;
        
    scanf("%d, %d", &numInicial, &numFinal);

    while(numInicial>numFinal) {
        scanf("%d, %d", &numInicial, &numFinal);
    }

    for(int i=numInicial; i<numFinal; i++) {
        if(i%1 == 0 && i%i == 0) {
            printf("%d ", i);
        }
    }
return 0;
}
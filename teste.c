#include <stdio.h>
#include <stdlib.h>

int main() {

    int vVetor[5];
    int i;
    int vTotal = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vVetor[i]);
    }
    for (i = 0; i <5; i++) {
        if (vVetor[i] > 100) {
            vTotal += vVetor[i];
        }
    }

}
#include <stdio.h>

int main() {
    int numeroRamos;

    printf("Digite o numero de ramos da arvore de Natal: ");
    scanf("%d", &numeroRamos);

    // Loop para imprimir cada linha da meia árvore
    for (int i = 1; i <= numeroRamos; i++) {
        // Loop para imprimir os asteriscos de cada linha
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
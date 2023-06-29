#include <stdio.h>

int main() {

    int matriz[5][3];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = i * j;
        }
    }

    int busca;
    int semaforo = 0;
    int contador = 0;
    printf("Digite o parametro de busca: ");
    scanf("%d", &busca);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            if (busca == matriz[i][j]) {
                printf("Encontrou na posicao [%d][%d]\n", i, j);
                semaforo = 1;
                contador++;
            }
        }
    }
    printf("\nExistem %d ocorrencia(s) do parametro %d ", contador, busca);
    if (semaforo == 0) {
        printf("\nNao foi encontrado nenhuma ocorrencia do %d", busca);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d]", matriz[i][j]);

        }

    printf("\n");

    }
}
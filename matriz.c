#include <stdio.h>

int main()
{

    int matriz[3][5];
    int i, j;

    // Leitura
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d]", matriz[i][j]);
        }

        printf("\n");
    }
}
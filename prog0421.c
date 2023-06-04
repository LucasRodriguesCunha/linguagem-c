#include <stdio.h>

int main()
{

    int numero;

    while (1)
    {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &numero);

        if (numero >= 1 && numero <= 100)
        {
            break;
        }

        printf("O numero digitado esta fora do intervalo permitido.\n");
    }

    printf("O numero digitado esta dentro do intervalo permitido.\n");

    return 0;
}
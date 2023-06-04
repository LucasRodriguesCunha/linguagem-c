#include <stdio.h>

int main()
{
    int codigo_inicio, codigo_fim;

    printf("Digite o código do primeiro caractere (entre 0 e 255): ");
    scanf("%d", &codigo_inicio);

    printf("Digite o código do último caractere (entre 0 e 255): ");
    scanf("%d", &codigo_fim);

    if (codigo_inicio < 0 || codigo_inicio > 255 || codigo_fim < 0 || codigo_fim > 255)
    {
        printf("Os números devem estar entre 0 e 255.\n");
        return 1;
    }

    if (codigo_inicio > codigo_fim)
    {
        printf("O código do primeiro caractere deve ser menor ou igual ao código do último caractere.\n");
        return 1;
    }

    int codigo_ascii;

    for (codigo_ascii = codigo_inicio; codigo_ascii <= codigo_fim; codigo_ascii++)
    {
        printf("Código ASCII: %d   Caractere: %c\n", codigo_ascii, codigo_ascii);
    }

    return 0;
}
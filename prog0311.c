#include <stdio.h>
#include <ctype.h>

int main()
{
    char estCivil;

    puts("Qual o estado civil: ");
    estCivil = getchar();

    estCivil = tolower(estCivil); // Converte para minúscula

    if (estCivil == 's')
        printf("Solteiro");
    else if (estCivil == 'c')
        printf("Casado");
    else if (estCivil == 'd')
        printf("Divorciado");
    else if (estCivil == 'v')
        printf("Viúvo");
    else
        printf("[ERRO] Estado civil inválido.");

    return 0;
}
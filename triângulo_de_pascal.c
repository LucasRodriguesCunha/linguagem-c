// Lucas Rodrigues Cunha
// Dia 17 de junho de 2023

#include <stdio.h>

int main()
{
    int linhas;

    printf("\t| Triangulo de Pascal |\n\n");

    // Solicita ao usuário o número de linhas desejado
    printf("Digite o numero de linhas do triangulo de Pascal: ");
    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++)
    {
        int coeficiente = 1;
        
        for (int j = 0; j <= i; j++)
        {
            // Imprime o coeficiente atual
            printf("%5d", coeficiente);

            // Calcula o próximo coeficiente
            coeficiente = coeficiente * (i - j) / (j + 1);
        }

        // Pula para a próxima linha após imprimir a linha atual do triângulo
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{

    int codigo_ascii;
    char input;

    for (codigo_ascii = 0; codigo_ascii <= 255; codigo_ascii++)
    {
        printf("Codigo ASCII: %d    Caractere: %c\n", codigo_ascii, codigo_ascii);

        if ((codigo_ascii + 1) % 20 == 0)
        {
            printf("Pressione 'c' ou 'C' para continuar ou qualquer outra tecla para sair: ");
            input = getchar();
            getchar(); // Captura o caractere <ENTER> do input anterior

            if (input != 'c' && input != 'C')
            {
                break; // Sai do loop se a entrada não for 'c' ou 'C'
            }
        }
    }

    return 0;
}
// Não está funcionando

#include <stdlib.h>
#include <string.h> // Trabalhar com strings

                               void
                               forca(int estado)
{
    if (estado == 0)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("-\n");
    }
    else if (estado == 1)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|           0\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("-\n");
    }
    else if (estado == 2)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|           0\n");
        printf("|           |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("-\n");
    }
    else if (estado == 3)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|           0\n");
        printf("|          -|\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("-\n");
    }
    else if (estado == 4)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|           0\n");
        printf("|          -|-\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("-\n");
    }
    else if (estado == 5)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|           0\n");
        printf("|          -|-\n");
        printf("|          /\n");
        printf("|\n");
        printf("|\n");
        printf("-\n");
    }
    else if (estado == 6)
    {
        printf("-------------\n");
        printf("|           |\n");
        printf("|           0\n");
        printf("|          -|-\n");
        printf("|          / \\\n");
        printf("|\n");
        printf("|\n");
        printf("-       ENFORCADO \n");
    }
}

int main(void)
{
    char palavraSecreta[100];

    printf("|*****************************************************|\n");
    printf("|*                 JOGO   DA   FORCA                 *|\n");
    printf("|*****************************************************|\n\n");

    printf("JOGADOR 1:\n");
    printf("Palavra-secreta:\n"); // Palavra-secreta
    scanf("%s", &palavraSecreta);
    printf("A palavra-secreta eh: %s\n", palavraSecreta);
    printf("A palavra tem %i caracteres", strlen(palavraSecreta));

    for (int i = 0; i < 30; i++)
    {
        printf("\n");
    }

    char palavraTela[100];               // Palavra para tela.
    strcpy(palavraTela, palavraSecreta); // Copia da variável palavraSecreta.
    for (int i = 0; i < strlen(palavraTela); i++)
    { // Substitui letras por underscore.
        palavraTela[i] = '_';
    }

    puts(palavraTela);

    int erros = 0;
    while (1)
    {
        // Imprimir a forca.
        forca(erros);

        // Imprimir os underlines/underscores
        // para cada letra da palavra-secreta,
        // ou seja, imprimir variável palavraTela.
        printf("Adivinhe: ");
        for (int i = 0; i < strlen(palavraTela); i++)
        {
            printf("%c", palavraTela[i]);
        }

        // Recebe a letra.
        printf("Letra:\n ");
        char letra;
        scanf("%c", &letra);
        // Se letra correta atualiza variável palavra na tela.
        // Verifica se a letra está correta.
        int seraQueErrou = 1; // 1 - Sim | 0 - Não
        for (int i = 0; i < strlen(palavraTela); i++)
        {
            if (letra == palavraSecreta[i])
            { // Está certo
                palavraTela[i] = letra;
                seraQueErrou = 0;
            }
        }
        // Senão, incrementa erros.
        if (seraQueErrou == 1)
        {
            erros++;
        }
        // Verifica se o jogo acabou.
        if (erros == 6)
            // Perdeu
            break;
    }
}
        

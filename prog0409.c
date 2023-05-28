#include <stdio.h>

int main()
{

    char opcao;

    do
    {
        printf("\nM E N U   P R I N C I P A L\n");
        printf("\n\n\tClientes");
        printf("\n\n\tFornecedores");
        printf("\n\n\tEncomendas");
        printf("\n\n\tOpcao: ");
        scanf(" %c", &opcao);
        fflush(stdin); // Limpa o buffer do teclado.

        switch (opcao)
        {
        case 'c':
        case 'C':
            puts("Opcao CLIENTES:");
            break;
        case 'f':
        case 'F':
        
            puts("Opcao FORNECEDORES:");
            break;
        case 'e':
        case 'E':
            puts("Opcao ENCOMENDAS:");
            break;
        case 's':
        case 'S':
            break; // Não faz nada.
        default:
            puts("Opcao INVALIDA");
        }
        getchar(); // Parar a tela.
    } while (opcao != 's' && opcao != 'S');
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[30];
    char email[50];
    int telefone;
} Contato;

void adicionarContato(Contato* agenda, int* totalContatos)
{
    if (*totalContatos < 1000)
    {
        printf("Digite o nome: ");
        scanf("%s", agenda[*totalContatos].nome);
        printf("Digite o email: ");
        scanf("%s", agenda[*totalContatos].email);
        printf("Digite o telefone: ");
        scanf("%d", &agenda[*totalContatos].telefone);

        (*totalContatos)++;
        printf("\nContato adicionado com sucesso!\n\n");
    }
    else
    {
        printf("A agenda esta cheia. Impossivel adicionar mais contatos.\n\n");
    }
}

int buscarContato(Contato* agenda, int totalContatos, const char* valorBusca, int tipoBusca)
{
    for (int i = 0; i < totalContatos; i++)
    {
        if (tipoBusca == 1 && strcmp(agenda[i].nome, valorBusca) == 0)
        {
            return i;
        }
        else if (tipoBusca == 2 && strcmp(agenda[i].email, valorBusca) == 0)
        {
            return i;
        }
        else if (tipoBusca == 3 && agenda[i].telefone == atoi(valorBusca))
        {
            return i;
        }
    }
    return -1;
}

void exibirAgenda(Contato* agenda, int totalContatos)
{
    printf("Agenda de Contatos:\n");
    for (int i = 0; i < totalContatos; i++)
    {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Email: %s\n", agenda[i].email);
        printf("Telefone: %d\n\n", agenda[i].telefone);
    }
}

void deletarContato(Contato* agenda, int* totalContatos, int indice) {
    if (indice >= 0 && indice < *totalContatos) {
        for (int i = indice; i < *totalContatos - 1; i++) {
            strcpy(agenda[i].nome, agenda[i + 1].nome);
            strcpy(agenda[i].email, agenda[i + 1].email);
            agenda[i].telefone = agenda[i + 1].telefone;
        }
        (*totalContatos)--;
        printf("Contato deletado com sucesso!\n\n");
    } else {
        printf("Indice de contato invalido.\n\n");
    }
}

int main()
{
    Contato vAgenda[1000];
    int totalContatos = 0;
    int opcao = 0;

    while (opcao != 7)
    {
        printf("Escolha uma opcao:\n");
        printf("1. Adicionar contato\n");
        printf("2. Buscar contato por nome\n");
        printf("3. Buscar contato por telefone\n");
        printf("4. Buscar contato por email\n");
        printf("5. Ver todos os contatos\n");
        printf("6. Deletar contato\n");
        printf("7. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            adicionarContato(vAgenda, &totalContatos);
            break;
        case 2:
        {
            char nomeBusca[30];
            printf("Digite o nome do contato a ser buscado: ");
            scanf("%s", nomeBusca);

            int indice = buscarContato(vAgenda, totalContatos, nomeBusca, 1);
            if (indice != -1)
            {
                printf("\nContato encontrado:\n");
                printf("Nome: %s\n", vAgenda[indice].nome);
                printf("Email: %s\n", vAgenda[indice].email);
                printf("Telefone: %d\n\n", vAgenda[indice].telefone);
            }
            else
            {
                printf("\nContato nao encontrado.\n\n");
            }
            break;
        }
        case 3:
        {
            char telefoneBusca[20];
            printf("Digite o telefone do contato a ser buscado: ");
            scanf("%s", telefoneBusca);

            int indice = buscarContato(vAgenda, totalContatos, telefoneBusca, 3);
            if (indice != -1)
            {
                printf("\nContato encontrado:\n");
                printf("Nome: %s\n", vAgenda[indice].nome);
                printf("Email: %s\n", vAgenda[indice].email);
                printf("Telefone: %d\n\n", vAgenda[indice].telefone);
            }
            else
            {
                printf("\nContato nao encontrado.\n\n");
            }
            break;
        }
        case 4:
        {
            char emailBusca[50];
            printf("Digite o email do contato a ser buscado: ");
            scanf("%s", emailBusca);

            int indice = buscarContato(vAgenda, totalContatos, emailBusca, 2);
            if (indice != -1)
            {
                printf("\nContato encontrado:\n");
                printf("Nome: %s\n", vAgenda[indice].nome);
                printf("Email: %s\n", vAgenda[indice].email);
                printf("Telefone: %d\n\n", vAgenda[indice].telefone);
            }
            else
            {
                printf("\nContato nao encontrado.\n\n");
            }
            break;
        }
        case 5:
            exibirAgenda(vAgenda, totalContatos);
            break;
        case 6:
        {
            int indice;
            printf("Digite o indice do contato a ser deletado: ");
            scanf("%d", &indice);

            deletarContato(vAgenda, &totalContatos, indice);
            break;
        }
        case 7:
            printf("Saindo...\n");
            opcao = 7;
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }
    }

    return 0;
}

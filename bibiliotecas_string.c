// String é um conjunto de caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[] = "casa";
    int tamanho;
    char busca[1000];
    tamanho = strlen(nome);
    printf("Digite o objeto para buscar: ");
    gets(busca);
    int compara;
    compara = strcmp(nome, busca);

    printf("Devolucao da var. compara = %d\n", compara);

    // char outroNome[30];
    // char sobrenome[] = "Daibert";
    // char final[] = "Professor";

    // strcpy(outroNome, nome);
    // printf("Outro nome: %s\n", outroNome);

    // strncpy(outroNome, nome, 5);
    // printf("Impressao: %s\n", outroNome);

    // strcat(nome, sobrenome);
    // strcat(nome, final);
    // printf("Impressao: %s\n", nome);

    // strncat(nome, sobrenome, 2);
    // printf("Impressao: %s\n", nome);

    // tamanho = strlen(nome);
    // printf("Impressao: %s - %d\n", nome, tamanho);

}
#include <stdio.h>

int main() {

    int ano;

    printf("Introduza um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        printf("Ano eh bissexto\n");
    else
        printf("Ano nao eh bissexto\n");
}
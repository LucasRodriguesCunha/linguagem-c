#include <stdio.h>
// Versão 4

int main() {

    int n;

    printf("Introduza um numero: ");
    scanf("%d", &n);

    if (n)
        printf("Numero nao eh igual a zero\n");
    else
        printf("Numero eh igual a zero\n");

}
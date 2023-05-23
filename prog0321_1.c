#include <stdio.h>
// Versão 1

int main() {

    int n;

    printf("Introduza um numero: ");
    scanf("%d", &n);
    
    if (n == 0)
        printf("Numero eh igual a zero\n");
    else
        printf("Numero nao eh igual a zero\n");

}
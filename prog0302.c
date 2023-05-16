#include <stdio.h>

int main() {

    int x;

    printf("Introduza um numero: ");
    scanf("%d", &x);
    if (x >= 0)
        printf("Numero positivo\n");
    else
        printf("Numero negativo\n");
}
#include <stdio.h>

int main() {

    int x;

    printf("Introduza um numero: ");
    scanf("%d", &x);
    if (x != 0)
        printf("%d nao eh zero!!!!\n", x);
    else
        printf("%d eh igual a zero!!!\n", x);
}
#include <stdio.h>

int main() {

    float x;

    printf("Introduza um numero real: ");
    scanf("%f", &x);
    printf("Parte inteira    : %d\n", (int) x);
    printf("Parte fracionaria: %f\n", x - ((int) x));
}
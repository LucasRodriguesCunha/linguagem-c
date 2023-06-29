#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double valor1 = 27;
    double valor2 = 27;
    double valor3 = 27;
    double resultado1;
    double resultado2;
    double resultado3;

    resultado1 = sqrt(valor1); // Raiz quadrada
    resultado2= cbrt(valor2); // Raiz cúbica
    resultado3 = pow(valor3, 2); // Potência



    printf("Raiz quadrada de %.2lf: %.2lf\n", valor1, resultado1);
    printf("Raiz cubica de %.2lf: %.2lf\n", valor2, resultado2);
    printf("Raiz cubica de %.2lf: %.2lf\n", valor3, resultado3);



}
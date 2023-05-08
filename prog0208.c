#include <stdio.h>

int main() {

    float quilos = 1.0E3;    /* Uma tonelada são 1.000 quilos */
    double gramas = 1.0E6;    /* Uma tonelada são 1.000.000 gramas */
    float n_toneladas;

    printf("Quantas toneladas comprou: ");  scanf("%f", &n_toneladas);
    printf("Numero de quilogramas = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
    printf("Numero de gramas = %f = %e\n", n_toneladas * gramas * n_toneladas * gramas);

}
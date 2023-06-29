#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double valor = 5.9;
    double arredonda_baixo = floor(valor); // Arredonda para baixo
    double arredonda_cima = ceil(valor); // Arredonda para cima
    double arredonda_meio = round(valor); // Arredonda para o inteiro mais próximo

    // printf("Digite um valor real: ");
    printf("Valor: %lf", valor);
    puts("\n");
    printf("Valor arredondado para baixo: %lf", arredonda_baixo);
    puts("\n");
    printf("Valor arredondado para cima: %lf", arredonda_cima);
    puts("\n");
    printf("Valor arredondado para o meio: %lf", arredonda_meio);
    puts("\n");
    

}

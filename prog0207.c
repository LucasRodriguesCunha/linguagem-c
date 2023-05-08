#include <stdio.h>

int main() {

    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("Introduza o raio de circunferencia: ");
    scanf("%f", &raio);
    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("Area = %f\nPerimetro = %f\n", area, perimetro);
}
#include <stdio.h>

int main() {

    float salario;
    char est_civil;

    printf("Qual o salario: "); scanf("%f", &salario);
    printf("Qual o estado civil: "); scanf(" %c", &est_civil);
    if (est_civil == 'C' || est_civil == 'c')
        printf("Imposto: %.2f\n", salario * 0.09);
    else
        if(est_civil == 'S' || est_civil == 's')
            printf("Imposto: %2.f\n", salario * 0.10);
        else
            printf("Estado civil incorreto.\n");
    
}
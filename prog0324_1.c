#include <stdio.h>

int main()
{

    int mes, n_dias;

    printf("Introduza o numero do mes 1..12: ");
    scanf("%d", &mes);

    if (mes == 2)
        n_dias = 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        n_dias = 30;
    else
        n_dias = 31;

    printf("O mes %d tem %d dia\n", mes, n_dias);
}
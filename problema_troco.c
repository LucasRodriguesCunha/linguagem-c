// Capture do teclado o valor final de uma compra
// e o valor que o cliente irá pagar. O sistema
// deve calcular o troco e informar na tela.
// Após, o sistema calcular o troco será dado
// o cálculo em nota e moedas.

// Código escrito - 26/05/2023


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorCompra, valorPago, troco;
    int notas100, notas50, notas20, notas10, notas5, notas2, moedas1, moedas50, moedas25, moedas10, moedas5, moedas1cent;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &valorPago);

    troco = valorPago - valorCompra;

    if (troco < 0)
    {
        printf("Valor pago insuficiente!\n");
        return 1;
    }

    notas100 = troco / 100;
    troco -= notas100 * 100;

    notas50 = troco / 50;
    troco -= notas50 * 50;

    notas20 = troco / 20;
    troco -= notas20 * 20;

    notas10 = troco / 10;
    troco -= notas10 * 10;

    notas5 = troco / 5;
    troco -= notas5 * 5;

    notas2 = troco / 2;
    troco -= notas2 * 2;

    moedas1 = troco / 1;
    troco -= moedas1 * 1;

    moedas50 = round((troco / 0.5));
    troco -= moedas50 * 0.5;

    moedas25 = round((troco / 0.25));
    troco -= moedas25 * 0.25;

    moedas10 = round((troco / 0.10));
    troco -= moedas10 * 0.10;

    moedas5 = round((troco / 0.05));
    troco -= moedas5 * 0.05;

    moedas1cent = round((troco / 0.01));
    troco -= moedas1cent * 0.01;

    printf("Troco a ser dado:\n");

    if (notas100 > 0)
        printf("%d nota(s) de R$ 100\n", notas100);
    if (notas50 > 0)
        printf("%d notas de R$ 50\n", notas50);
    if (notas10 > 0)
        printf("%d notas de R$ 20\n", notas20);
    if (notas20 > 0)
        printf("%d notas de R$ 10\n", notas10);
    if (notas5 > 0)
        printf("%d notas de R$ 5\n", notas5);
    if (notas2 > 0)
        printf("%d notas de R$ 2\n", notas2);

    if (moedas1 > 0)
        printf("%d moedas de R$ 1,00\n", moedas1);
    if (moedas50 > 0)
        printf("%d moedas de R$ 0,50\n", moedas50);
    if (moedas25 > 0)
        printf("%d moedas de R$ 0,25\n", moedas25);
    if (moedas10 > 0)
        printf("%d moedas de R$ 0,10\n", moedas10);
    if (moedas5 > 0)
        printf("%d moedas de R$ 0,05\n", moedas5);
    if (moedas1cent > 0)
        printf("%d moedas de R$ 0,01\n", moedas1cent);

    return 0;
}
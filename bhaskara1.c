// Fórmula de Bhaskara

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    // Definindo cores.
    // system("color db");

    // Declarando variáveis do tipo real com double "dupla precisão".

    double a, b, c, delta, x1, x2;

    // Usuário vai digitar os valores de a, b e c, e o programa vai armazenar nas respectivas variáveis.

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    // Fazendo o processamento da fórmula de Bhaskara em si.

    delta = (b * b) - (4 * a * c); // Poderia ter usado também pow para elevar o b......" pow (b, 2)"
    x1 = ((-b) + (sqrt(delta)) / (2 * a));
    x2 = ((-b) - (sqrt(delta)) / (2 * a));

    // Se delta for menor ou igual que 0 ou se a, b ou c foram igual à 0 faça a impressão de tela que o cálculo é impossível.

    if (delta <= 0 || a == 0 || b == 0 || c == 0) {
        printf("Impossivel calcular\n");
    }

    // Senão imprima na tela os respectivos resultados x1 e x2.
    else {
        printf("x1 = %.5lf\n", x1);
        printf("x2 = %.5lf\n", x2);
    }
}
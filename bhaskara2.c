#include <stdio.h>
#include <math.h>

int main() {

    // Declaração das variáveis.
    float a, b, c;
    float delta, x1, x2;

    // Solicita os coeficientes da equação ao usuário.
    printf("Digite o coeficiente (a) da equacao: ");
    scanf("%f", &a);
    printf("Digite o coeficiente (b) da equacao: ");
    scanf("%f", &b);
    printf("Digite o coeficiente (c) da equacao: ");
    scanf("%f", &c);

    // Calcula o valor do delta.
    delta = (b * b) - 4 * a * c;

    // Verifica o valor do delta.
    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {

        // Caso o delta seja igual a zero, há apenas uma raiz.
        x1 = -b / (2* a);
        printf("A equacao possui uma raiz real:\n");
        printf("x = %.2f\n", x1);
        
    } else {
       // Caso o delta seja maior que zero, há duas raízes.
       x1 = (- b + sqrt(delta)) / (2 * a);
       x2 = (- b - sqrt(delta)) / (2 * a);
       printf("A equacao possui duas raizes reais:\n");
       printf("x1 = %.2f\n", x1);
       printf("x2 = %.2f\n", x2);
    }


}
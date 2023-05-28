// Funções retornam um valor.
// Procedimentos não retornam um valor.
// Procedimentos é um tipo de função.
// Void é o mesmo que nulo, não retorna nada.

#include <stdio.h>
#include <stdlib.h>

void imprimeDaibert() {
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Daibert eh lindo!\n");
    }
}

int soma(int pValor1, int pValor2) {
    return pValor1 + pValor2;
}

int main() {
    imprimeDaibert();
    printf("Digite o primeiro valor: ");
    int vValor1, vValor2;
    scanf("%d", &vValor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &vValor2);
    int vRetorno = soma (vValor1, vValor2);
    printf("Resultado: %d", vRetorno);
    printf("\n");
    
    return 0;
}


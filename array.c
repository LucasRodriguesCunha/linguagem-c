/*
#include <stdio.h>

int main(void)
{

    int notas[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor para adicionar no vetor:");
        scanf("%d", &notas[i]);
    }
    return 0;
}
*/

#include <stdio.h>

int main() {

    int vetDadosInteiros[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i);
        scanf("%d", &vetDadosInteiros);
    }

}
/* For

1) quando soubermos exatamente quantas vezes o bloco de comandos dentro do FOR deve ser repetido;
2) quando o teste deva ser feito antes da execução de um bloco de comandos;
3) quando houver casos em que o fluxo de repetição não deva ser repetido nenhuma vez.


#include <stdio.h>

int main() {

    int contador;

    for (contador = 0; contador < 10; contador++) {
        printf("Contador: %d\n", contador);
    }
    printf("Valor do contador apos o laco: %d\n", contador);
}
*/

/* While

1) quando não sabe-se exatamente quantas vezes o fluxo de repetição deve ser repetido;
2) quando o teste deva ser feito antes de iniciar a execução do bloco de comandos;
3) quando houver casos em que o fluxo de repetição não deva ser repetido nenhuma vez.

#include <stdio.h>

int main() {

    int continua, contador;
    continua = 's';
    contador = 0;

    while (continua == 's') { // Enquanto for igual a s
        contador++;
        printf("Tecle 's' se deseja continuar\n");
        continua = getch();
    }

}
*/

/* Do while

1) quando não sabe-se exatamente a quantidade de vezes que o fluxo irá repetir;
2) quando o teste deva ser feito depois da execução do bloco de comandos do fluxo de repetição;
3) quando o bloco de comandos deve ser executado pelo menos uma vez.



#include <stdio.h>

int main() {

    int continua, contador;
    contador = 0;

    do {
        contador++;
        printf("Tecle 's' se deseja continuar\n");
        continua = getch();
    }
    while (continua == 's');
    printf("O bloco foi repetido %d vezes", contador);
}
*/




// Experimente a função puts("Hello World"); (put string) para escrever a string
// "Hello World" e indique qual a diferença entre esta e a função printf.
// Nota: Essa função também faz parte do stdio.h.

#include <stdio.h>

int main() {

    puts("Hello World");

    return 0;

}

// A função puts() é usada para escrever uma string na tela, seguida por uma nova linha, e faz parte da // biblioteca stdio.h. A diferença mais significativa entre puts() e printf() é que a função puts() não // permite a formatação de string, como a função printf(). Ela simplesmente escreve a string fornecida na // tela, seguida por uma nova linha.

// No caso do exemplo mencionado, a função puts("Hello World"); escreverá "Hello World" na tela, seguida por // uma nova linha. Se usássemos printf("Hello World\n"); teríamos o mesmo resultado, mas com a possibilidade // de incluir formatação adicional na string, como por exemplo, usar variáveis.

// Além disso, a função puts() retorna um valor inteiro, que é o número de caracteres escritos na tela, // enquanto a função printf() retorna o número de caracteres que foram formatados e escritos na tela. Porém, // esse valor de retorno geralmente não é utilizado na prática.
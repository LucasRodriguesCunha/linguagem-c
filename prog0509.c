#include <stdio.h>

int x_isdigit(char ch)
{

    return (ch >= '0' && ch <= '9');

    /* Escreve todos os caracteres não dígitos */
}

int main()
{

    char c;

    while (1) /* Termina com ctrl-c */
    {

        c = getchar();

        if (!x_isdigit(c)) /* Se não for dígito */
            putchar(c);
    }
}
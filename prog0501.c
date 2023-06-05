#include <stdio.h>

int main()
{

    int i;

    /* Escrita do cabeçalho */

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    puts("Numeros entre 1 e 5");

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');

    /* Escrita dos números */

    for (i = 1; i <= 5; i++)
        printf("%d\n", i);

    for (i = 1; i <= 20; i++)
        putchar('*');
    putchar('\n');
}
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 4;
    int i;

    if ((x + y - 1) > 5)
        y = y + 2;
    else
        y--;
    z = x + y;
    for (i = 1; i < 9; i++)
        y = y + i;
    z = z + y;

    printf("O valor de z eh: %d\n", z);

    return 0;
}
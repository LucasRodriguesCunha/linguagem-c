#include <stdio.h>

int main()
{

    int i, j, n;

    printf("Introduza um numero: ");
    scanf("%d", &n);

    for (i = 1, j = n; i <= n; i++, j--)
        printf("%d %d\n", i, j);
}
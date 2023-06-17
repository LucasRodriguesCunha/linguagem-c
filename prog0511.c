#include <stdio.h>

float Pot(float x, int n)
{
    float res = 1.0;
    int i;

    for (i = 1; i <= n; i++)
        res *= x;

    return res;
}

int main()
{
    printf("%f %f %f", Pot(2.0, 4), Pot(1.234, 3), Pot(3.0, 0));
    return 0;
}

#include <stdio.h>

int main() {

    int x, y, tmp;

    printf("Introduza dois numeros: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d %d\n", x, y);

}
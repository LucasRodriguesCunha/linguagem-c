#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 44;
    int a = 0;
    int b = 0;

    while (n > 0 ) {
        if ((n % 2) == 0) {
            a += 1;
        } else {
            b += 1;
        }
        n = n / 2;
    }
    printf("%d %d\n", a, b);
    return 0;
}
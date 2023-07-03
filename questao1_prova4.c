#include <stdio.h>

int main() {

    int n = 4; int a = 10;
    int b = 4; int c;

    for (b = 1; b <= n; b++) {
        for (c = b; c <= n; c++) {
            a = a + 10;
        }
    }
    printf("a: %d - b: %d - c: %d - n: %d", a, b, c, n);
    return 0;
}
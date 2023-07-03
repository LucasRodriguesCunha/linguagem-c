#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[10] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1};
    int i, m = 0, s = 0;

    for (i = 0; i < 10; i++) {
        s = s + v[i];
        if (v[i] > m)
            m = v[i];
    }
    printf("%d %d\n", m, s);
}
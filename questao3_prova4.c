#include <stdio.h>
#include <stdlib.h>

int main() {

    float matrizDados[5][6];
    int k, m;
    for (k = 0; k < 5; k++) {
        for (m = 0; m < 6; m++) {
            matrizDados[k][m] = (k * m) * 2;
            matrizDados[k][m] += 1;
        }
    }


}
#include <stdio.h>

int main () {

    int codigo_ascii;

    for (codigo_ascii = 0; codigo_ascii <= 255; codigo_ascii++) {
        printf("Codigo ASCII: %d    Caractere: %c\n", codigo_ascii, codigo_ascii);
    }

    return 0;

}
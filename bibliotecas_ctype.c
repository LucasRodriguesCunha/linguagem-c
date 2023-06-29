// Caractere é apenas um caractere
//          diferença
// String é um conjunto de caracteres

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char frase[] = "Centro Universitario Governador Ozanam Coelho\n";
    char caractere = 'a';
    printf("Caractere maiusculo: %c\n", toupper(caractere));
    printf("Caractere minusculo: %c\n", tolower(caractere));

    size_t i;
    for (i = 0; i < strlen(frase); i++) {
        if (i % 2 == 0) {
            printf("%c", tolower(frase[i]));
        } else {
            printf("%c", toupper(frase[i]));
        }
    }

    printf("Frase: %s\n", frase);

}
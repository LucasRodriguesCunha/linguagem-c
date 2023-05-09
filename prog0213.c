#include <stdio.h>

int main() {

    char ch;

    printf("Introduza um caractere: ");
    scanf("%c", &ch);
    printf("O caractere '%c' tem o ASCII numero %d\n", ch, ch);
}
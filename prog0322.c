#include <stdio.h>

int main() {

    int n;    

    printf("Introduza um numero: ");
    scanf("%d", &n);

    switch (n)
    {
        case 0: printf("Numero eh igual a zero\n");
        break;
        default: printf("Numero nao eh igual a zero\n");
    }
    
}
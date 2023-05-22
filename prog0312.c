#include <stdio.h>

int main() {

    char Est_Civil;

    printf("Qual o estado civil: ");
    scanf(" %c", &Est_Civil);   // Ou Est_Civil = getchar();
    switch (Est_Civil) 
    {
        case 'C': printf("Casado\n"); break;
        case 'S': printf("Solteiro\n"); break;
        case 'D': printf("Divorciado\n"); break;
        case 'V': printf("Viúvo\n"); break;
        default: printf("Estado civil invalido\n");
    }
    
    return 0;
}

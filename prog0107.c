// Escreva um programa em C que apresente duas linhas
// com a string "Aqui vai um apito", ouvindo-se ao 
// final de cada string um sinal sonoro.

#include <stdio.h>

int main() {

    printf("Aqui vai um Apito\a\n"); /* \a - Sinal sonoro*/
    printf("Aqui vai um apito\7\n"); /* \7 ou \a representam o */
                                     /* mesmo caractere*/
    return 0;  
                                
}
#include <stdio.h>

int main() {

    int n_horas;
    long n_seg; // Pode ser muito grande

    printf("Numero de horas: ");
    scanf("%d", &n_horas);
    n_seg = n_horas < 0 ? 0 : n_horas * 3600L;
    printf("%d horas tem %ld segundos\n", n_horas, n_seg);

    return 0;

}
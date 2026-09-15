#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int quadrado = numero * numero;
   
    double decima_parte = numero / 10.0;

    printf("Quadrado do numero: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}
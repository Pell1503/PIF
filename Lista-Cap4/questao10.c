#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e PAR.\n");
    } else {
        printf("O numero e IMPAR.\n");
    }

    if (numero > 0) {
        printf("O numero e POSITIVO.\n");
    } else if (numero < 0) {
        printf("O numero e NEGATIVO.\n");
    } else {
        printf("O numero e ZERO.\n");
    }

    return 0;
}
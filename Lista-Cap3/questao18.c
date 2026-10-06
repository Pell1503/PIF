#include <stdio.h>

int main(void) {
    int numero;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    if (numero == 0) {
        printf("Numero invertido: 0\n");
        return 0;
    }

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Numero invertido: %d\n", invertido);
    return 0;
}

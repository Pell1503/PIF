#include <stdio.h>

int main(void) {
    double nota;

    do {
        printf("Digite uma nota de 0.0 a 10.0: ");
        scanf("%lf", &nota);

        if (nota < 0.0 || nota > 10.0)
            printf("Nota invalida! Tente novamente.\n");

    } while (nota < 0.0 || nota > 10.0);

    printf("Nota valida registrada: %.2f\n", nota);

    return 0;
}

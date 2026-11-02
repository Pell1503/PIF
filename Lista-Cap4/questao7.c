#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um numero real: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        printf("Raiz quadrada: %.2lf\n", sqrt(numero));
    } else {
        printf("Quadrado do numero: %.2lf\n", numero * numero);
    }

    return 0;
}
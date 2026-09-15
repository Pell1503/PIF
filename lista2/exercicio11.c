#include <stdio.h>

#define PI 3.141593

int main() {
    double graus, radianos;

    printf("Digite o valor do angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("O angulo de %.2f graus equivale a %.6f radianos.\n", graus, radianos);

    return 0;
}
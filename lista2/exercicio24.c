#include <stdio.h>

int main() {
    double kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade: %.2f km/h equivale a %.2f m/s\n", kmh, ms);

    return 0;
}
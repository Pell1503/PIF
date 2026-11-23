#include <stdio.h>
#include "areas.h"

int main() {
    float r, b, h;
    printf("Raio do circulo: ");
    scanf("%f", &r);
    printf("Base e altura do retangulo: ");
    scanf("%f %f", &b, &h);
    printf("Area do circulo   = %.2f\n", A_CIRC(r));
    printf("Area do retangulo = %.2f\n", A_RET(b, h));
    printf("Area do triangulo (mesma base e altura) = %.2f\n", A_TRI(b, h));
    return 0;
}

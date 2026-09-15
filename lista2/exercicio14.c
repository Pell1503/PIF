#include <stdio.h>
#include <math.h>

// Para compilar via GCC no Linux/macOS, lembre-se da flag -lm:
// gcc exercicio14.c -o exercicio14 -lm

int main() {
    double a, b, c;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double p = (a + b + c) / 2.0; // Semi-perimetro
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semi-perimetro (p): %.2f\n", p);
    printf("Area do triangulo (Heron): %.2f\n", area);

    return 0;
}
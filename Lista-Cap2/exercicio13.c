#include <stdio.h>

int main() {
    double lado, base, altura;

    printf("=== CALCULO DE AREAS GEOMETRICAS ===\n");
    printf("Digite o valor do lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite o valor da base (para retangulo e triangulo): ");
    scanf("%lf", &base);

    printf("Digite o valor da altura (para retangulo e triangulo): ");
    scanf("%lf", &altura);

    double area_quadrado = lado * lado;
    double area_retangulo = base * altura;
    double area_triangulo = (base * altura) / 2.0;

    printf("\n--- Resultados ---\n");
    printf("Area do Quadrado (L = %.2f): %.2f\n", lado, area_quadrado);
    printf("Area do Retangulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_retangulo);
    printf("Area do Triangulo Retangulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_triangulo);

    return 0;
}
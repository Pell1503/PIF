#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Erro: Os lados devem ser positivos!\n");

    } else if (a < b + c &&
               b < a + c &&
               c < a + b) {

        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");

        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");

        } else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}
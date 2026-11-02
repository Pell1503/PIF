#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: O coeficiente a deve ser diferente de zero.\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    printf("Delta = %.2lf\n", delta);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");

    } else if (delta == 0) {
        x1 = -b / (2 * a);

        printf("Raiz unica: %.2lf\n", x1);

    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Primeira raiz: %.2lf\n", x1);
        printf("Segunda raiz: %.2lf\n", x2);
    }

    return 0;
    }
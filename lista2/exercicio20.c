#include <stdio.h>
#include <math.h>

// Lembre-se de compilar com -lm no GCC: gcc exercicio20.c -o exercicio20 -lm

int main() {
    double lado_a, lado_b, hipotenusa;

    printf("Digite o valor do primeiro cateto (lado a): ");
    scanf("%lf", &lado_a);

    printf("Digite o valor do segundo cateto (lado b): ");
    scanf("%lf", &lado_b);

    // Teorema de Pitagoras: hipotenusa = sqrt(a^2 + b^2)
    hipotenusa = sqrt(pow(lado_a, 2.0) + pow(lado_b, 2.0));

    printf("Comprimento da hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
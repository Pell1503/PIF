#include <stdio.h>

#define PI 3.141593

int main() {
    double raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    double area = PI * (raio * raio);
    double circunferencia = 2.0 * PI * raio;

    printf("Area do circulo:           %.4f\n", area);
    printf("Circunferencia do circulo: %.4f\n", circunferencia);

    return 0;
}
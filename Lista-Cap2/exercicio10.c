#include <stdio.h>

int main() {
    double celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    // Garantindo uso de ponto flutuante na fracao (9.0 / 5.0)
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    printf("\n--- Conversao de Temperatura ---\n");
    printf("Celsius:    %.2f oC\n", celsius);
    printf("Fahrenheit: %.2f oF\n", fahrenheit);
    printf("Kelvin:     %.2f K\n", kelvin);

    return 0;
}
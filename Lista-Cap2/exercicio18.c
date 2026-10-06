#include <stdio.h>

#define PI 3.141593

int main() {
    double raio;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    double area_superficie = 4.0 * PI * (raio * raio);
    
    // ATENCAO: Usa-se (4.0 / 3.0) para evitar o truncamento da divisao inteira (4/3 = 1)
    double volume = (4.0 / 3.0) * PI * (raio * raio * raio);

    printf("Area da superficie da esfera: %.4f\n", area_superficie);
    printf("Volume da esfera:              %.4f\n", volume);

    return 0;
}
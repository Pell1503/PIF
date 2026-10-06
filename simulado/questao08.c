#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
    double R, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &R);

    area = 4.0 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}

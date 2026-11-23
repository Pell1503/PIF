#include <stdio.h>

#define PI 3.14159f

float area(float r);

int main() {
    float r;
    printf("Raio da esfera: ");
    scanf("%f", &r);
    printf("Area da esfera = %.2f\n", area(r));
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}

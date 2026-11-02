#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (distancia < 0 || litros <= 0) {
        printf("Dados invalidos!\n");
        return 0;
    }

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}
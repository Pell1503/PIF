#include <stdio.h>

int main() {
    float valor, aliquota, valorFinal;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    if (valor < 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    printf("\n1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");

    printf("Escolha o estado de destino: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;

        case 2:
            aliquota = 0.12;
            break;

        case 3:
            aliquota = 0.15;
            break;

        case 4:
            aliquota = 0.08;
            break;

        default:
            printf("Estado invalido!\n");
            return 0;
    }

    valorFinal = valor + (valor * aliquota);

    printf("Preco final com imposto: R$ %.2f\n", valorFinal);

    return 0;
}
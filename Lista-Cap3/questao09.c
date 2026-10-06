#include <stdio.h>

int main(void) {
    double valor, soma = 0.0;
    int quantidade = 0;

    while (1) {
        printf("Digite um valor positivo (negativo para parar): ");
        scanf("%lf", &valor);

        if (valor < 0)
            break;

        soma += valor;
        quantidade++;
    }

    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0)
        printf("Media: %.2f\n", soma / quantidade);
    else
        printf("Media: nao pode ser calculada sem valores validos.\n");

    return 0;
}

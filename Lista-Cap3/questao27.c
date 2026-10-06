#include <stdio.h>

int main(void) {
    int valor;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    int cedulas[] = {100, 50, 20, 10, 5, 2};
    int total = valor;

    for (int i = 0; i < 6; i++) {
        int quantidade = 0;

        while (total >= cedulas[i]) {
            total -= cedulas[i];
            quantidade++;
        }

        if (quantidade > 0)
            printf("R$ %d: %d cedula(s)\n", cedulas[i], quantidade);
    }

    if (total != 0)
        printf("Nao foi possivel compor exatamente o valor com as cedulas disponiveis.\n");

    return 0;
}

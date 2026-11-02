#include <stdio.h>

int main() {
    int valor, recebido, troco;
    int cem, cinquenta, vinte;
    int dez, cinco, dois;

    printf("Digite o valor total da compra: R$ ");
    scanf("%d", &valor);

    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &recebido);

    if (valor <= 0 || recebido < 0) {
        printf("Valores invalidos!\n");
        return 0;
    }

    if (recebido < valor) {
        printf("Erro: Valor insuficiente!\n");
        return 0;
    }

    troco = recebido - valor;

    printf("\nTroco: R$ %d\n", troco);

    cem = troco / 100;
    troco %= 100;

    cinquenta = troco / 50;
    troco %= 50;

    vinte = troco / 20;
    troco %= 20;

    dez = troco / 10;
    troco %= 10;

    cinco = troco / 5;
    troco %= 5;

    dois = troco / 2;
    troco %= 2;

    printf("\nDecomposicao do troco:\n");
    printf("Notas de R$ 100: %d\n", cem);
    printf("Notas de R$ 50: %d\n", cinquenta);
    printf("Notas de R$ 20: %d\n", vinte);
    printf("Notas de R$ 10: %d\n", dez);
    printf("Notas de R$ 5: %d\n", cinco);
    printf("Notas de R$ 2: %d\n", dois);

    if (troco > 0) {
        printf("Valor restante sem cedula disponivel: R$ %d\n", troco);
    }

    return 0;
}
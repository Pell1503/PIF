#include <stdio.h>

int main() {
    float valor, final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    printf("\n1 - A vista com 10%% de desconto\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha a forma de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            final = valor * 0.90;
            comissao = final * 0.05;

            printf("\nValor final: R$ %.2f\n", final);
            printf("Comissao: R$ %.2f\n", comissao);
            break;

        case 2:
            parcela = valor / 3;
            comissao = valor * 0.05;

            printf("\nValor total: R$ %.2f\n", valor);
            printf("Cada parcela: R$ %.2f\n", parcela);
            printf("Comissao: R$ %.2f\n", comissao);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
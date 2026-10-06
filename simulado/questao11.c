#include <stdio.h>

int main(void) {
    const double VALOR_DIA = 45.00;
    const double GRATIFICACAO = 0.05;
    const double IMPOSTO = 0.08;

    int dias;
    double bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * VALOR_DIA;
    gratificacao = bruto * GRATIFICACAO;
    imposto = bruto * IMPOSTO;
    liquido = bruto + gratificacao - imposto;

    printf("\n===== HOLERITE =====\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario bruto: R$ %.2f\n", bruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}

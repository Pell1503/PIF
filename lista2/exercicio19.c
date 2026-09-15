#include <stdio.h>

#define TAXA_DIARIA 30.00
#define IMPOSTO_IR 0.08

int main() {
    int dias_trabalhados;

    printf("Digite o numero de dias uteis trabalhados pelo encanador: ");
    scanf("%d", &dias_trabalhados);

    double valor_bruto = dias_trabalhados * TAXA_DIARIA;
    double valor_imposto = valor_bruto * IMPOSTO_IR;
    double valor_liquido = valor_bruto - valor_imposto;

    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Dias Trabalhados: %d\n", dias_trabalhados);
    printf("Valor Bruto:      R$ %.2f\n", valor_bruto);
    printf("Desconto IR (8%%): R$ %.2f\n", valor_imposto);
    printf("Valor Liquido:    R$ %.2f\n", valor_liquido);

    return 0;
}
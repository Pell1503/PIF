#include <stdio.h>

#define TAXA_NORMAL 10.00
#define TAXA_EXTRA 15.00
#define FAIXA_ISENCAO 12000.00
#define ALIQUOTA_IMPOSTO 0.10

int main() {
    double horas_normais, horas_extras;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    double salario_bruto_anual = (horas_normais * TAXA_NORMAL) + (horas_extras * TAXA_EXTRA);

    /* 
     * Uso do Operador Ternario (? :) para simular a tomada de decisao linear:
     * Se o salario bruto for maior que R$ 12.000,00, calcula 10% sobre o excedente.
     * Caso contrario, o imposto eh 0.0.
     */
    double excedente = salario_bruto_anual - FAIXA_ISENCAO;
    double imposto = (salario_bruto_anual > FAIXA_ISENCAO) ? (excedente * ALIQUOTA_IMPOSTO) : 0.0;

    double salario_liquido_anual = salario_bruto_anual - imposto;

    printf("\n--- Demonstrativo Anual do Trabalhador ---\n");
    printf("Salario Bruto Anual: R$ %.2f\n", salario_bruto_anual);
    printf("Imposto Devido (10%% sobre o excedente de R$ 12.000): R$ %.2f\n", imposto);
    printf("Salario Liquido Anual: R$ %.2f\n", salario_liquido_anual);

    return 0;
}
#include <stdio.h>

int main() {
    double salario_base;

    printf("Digite o salario-base do funcionario: R$ ");
    scanf("%lf", &salario_base);

    /* 
     * JUSTIFICATIVA MATEMATICA:
     * Gratificacao = +5% (salario_base * 0.05)
     * Imposto = -7% (salario_base * 0.07)
     * Salario Liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07)
     * Simplificando por fatoracao em evidencia:
     * Salario Liquido = salario_base * (1 + 0.05 - 0.07) = salario_base * 0.98
     */
    double gratificacao = salario_base * 0.05;
    double imposto = salario_base * 0.07;
    double salario_liquido = salario_base + gratificacao - imposto;

    printf("\n--- Demonstrativo Salarial ---\n");
    printf("Salario Base: R$ %.2f\n", salario_base);
    printf("Gratificacao (5%%): +R$ %.2f\n", gratificacao);
    printf("Imposto Retido (7%%): -R$ %.2f\n", imposto);
    printf("Salario Liquido a Receber: R$ %.2f\n", salario_liquido);

    return 0;
}
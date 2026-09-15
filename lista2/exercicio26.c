#include <stdio.h>

int main() {
    double comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (metros): ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno (metros): ");
    scanf("%lf", &largura);

    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%lf", &preco_metro);

    double perimetro = 2.0 * (comprimento + largura);
    double total_metros_arame = perimetro * 3.0; // 3 fios de arame
    double custo_total = total_metros_arame * preco_metro;

    printf("\n--- Orcamento para Cercamento ---\n");
    printf("Perimetro do terreno: %.2f metros\n", perimetro);
    printf("Total de arame necessario (3 fiadas): %.2f metros\n", total_metros_arame);
    printf("Custo total da compra: R$ %.2f\n", custo_total);

    return 0;
}
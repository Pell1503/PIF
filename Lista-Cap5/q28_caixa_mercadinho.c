#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, pago, subtotal, total;
    int qtd, pagamento;

    printf("Preco unitario: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &qtd);
    printf("Forma de pagamento (1 - a vista, 2 - a prazo): ");
    scanf("%d", &pagamento);

    subtotal = calculaSubtotal(preco, qtd);
    total = aplicaDesconto(subtotal, pagamento);
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: ");
    scanf("%f", &pago);
    if (pago < total) {
        printf("Valor insuficiente! Faltam R$ %.2f\n", total - pago);
        return 1;
    }
    printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    return (opcaoPagamento == 1) ? valor * 0.90f : valor;  /* 10% a vista */
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

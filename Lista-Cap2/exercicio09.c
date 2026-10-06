#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    /* 
     * NOTA MATEMATICA SOBRE A DIVISAO POR ZERO:
     * Para evitar erro de execucao (Floating Point Exception) em capitulos futuros,
     * utiliza-se uma estrutura condicional para checar se o divisor eh zero:
     * if (num2 != 0) { ... realiza divisao ... } else { printf("Erro: Divisao por zero!"); }
     */
    if (num2 != 0) {
        // Cast explicito (float) para evitar a divisao inteira
        float divisao_real = (float)num1 / num2;
        printf("Divisao real: %.2f\n", divisao_real);
    } else {
        printf("Divisao real: Impossivel (divisao por zero!)\n");
    }

    return 0;
}
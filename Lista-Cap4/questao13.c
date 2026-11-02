#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, resultado;
    char operacao;

    printf("===== CALCULADORA =====\n");
    printf("+ - Soma\n");
    printf("- - Subtracao\n");
    printf("* - Multiplicacao\n");
    printf("/ - Divisao\n");
    printf("^ - Potenciacao\n");

    printf("Escolha uma operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;

        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;

        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}
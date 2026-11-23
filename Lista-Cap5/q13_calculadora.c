#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int op;
    float a, b;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &op);

    if (op < 1 || op > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite os dois operandos: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case 1: printf("Resultado = %.2f\n", soma(a, b)); break;
        case 2: printf("Resultado = %.2f\n", subtrai(a, b)); break;
        case 3: printf("Resultado = %.2f\n", multiplica(a, b)); break;
        case 4:
            if (b == 0)
                printf("Erro: divisao por zero!\n");
            else
                printf("Resultado = %.2f\n", divide(a, b));
            break;
    }
    return 0;
}

float soma(float a, float b)       { return a + b; }
float subtrai(float a, float b)    { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b)     { return a / b; }

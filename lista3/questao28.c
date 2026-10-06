#include <stdio.h>

int main(void) {
    int opcao;
    double salario;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario: R$ ");
                scanf("%lf", &salario);

                if (salario < 0) {
                    printf("Salario invalido.\n");
                } else if (salario <= 2000.00) {
                    salario *= 1.15;
                    printf("Novo salario: R$ %.2f\n", salario);
                } else {
                    salario *= 1.10;
                    printf("Novo salario: R$ %.2f\n", salario);
                }
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%lf", &salario);

                if (salario < 0) {
                    printf("Salario invalido.\n");
                } else if (salario <= 3000.00) {
                    salario *= 0.08;
                    printf("Retencao de IR: R$ %.2f\n", salario);
                } else {
                    salario *= 0.15;
                    printf("Retencao de IR: R$ %.2f\n", salario);
                }
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
        }

    } while (opcao != 3);

    return 0;
}

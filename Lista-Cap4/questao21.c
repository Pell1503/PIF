#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("\n1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais cargos\n");

    printf("Escolha o cargo: ");
    scanf("%d", &cargo);

    if (salario < 0) {
        printf("Salario invalido!\n");
        return 0;
    }

    switch (cargo) {
        case 1:
            percentual = (salario <= 3000) ? 0.15 : 0.10;
            break;

        case 2:
            percentual = (salario <= 5000) ? 0.10 : 0.05;
            break;

        case 3:
            percentual = 0.08;
            break;

        default:
            printf("Cargo invalido!\n");
            return 0;
    }

    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("\nAumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
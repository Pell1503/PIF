#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final: ");
    scanf("%f", &nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0 || nota > 10 || faltas < 0) {
        printf("Dados invalidos!\n");
        return 0;
    }

    if (nota >= 9.0) {
        conceito = (faltas <= 20) ? 'A' : 'B';

    } else if (nota >= 7.5) {
        conceito = (faltas <= 20) ? 'B' : 'C';

    } else if (nota >= 5.0) {
        conceito = (faltas <= 20) ? 'C' : 'D';

    } else if (nota >= 4.0) {
        conceito = (faltas <= 20) ? 'D' : 'E';

    } else {
        conceito = 'E';
    }

    printf("Conceito do estudante: %c\n", conceito);

    return 0;
}
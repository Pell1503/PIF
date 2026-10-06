#include <stdio.h>

int main(void) {
    double nota;
    double soma = 0.0;
    double maior = 0.0;
    double menor = 10.0;
    int quantidade = 0;

    while (1) {
        printf("Digite uma nota de 0.0 a 10.0 (-1 para encerrar): ");
        scanf("%lf", &nota);

        if (nota == -1.0)
            break;

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida.\n");
            continue;
        }

        soma += nota;
        quantidade++;

        if (nota > maior)
            maior = nota;

        if (nota < menor)
            menor = nota;
    }

    printf("Total de alunos avaliados: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhuma nota foi registrada.\n");
    }

    return 0;
}

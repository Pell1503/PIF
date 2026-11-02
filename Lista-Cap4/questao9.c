#include <stdio.h>

int main() {
    float trabalho, semestral, exame;
    float media;

    printf("Nota do trabalho de laboratorio: ");
    scanf("%f", &trabalho);

    printf("Nota da avaliacao semestral: ");
    scanf("%f", &semestral);

    printf("Nota do exame final: ");
    scanf("%f", &exame);

    media = (trabalho * 2 + semestral * 3 + exame * 5) / 10;

    printf("\nMedia ponderada: %.2f\n", media);

    if (media >= 0 && media <= 2.9) {
        printf("Situacao: Reprovado\n");
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Situacao: Em Recuperacao\n");
    } else if (media >= 5.0) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Media invalida!\n");
    }

    return 0;
}
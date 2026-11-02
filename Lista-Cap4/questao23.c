#include <stdio.h>

int main() {
    int dia, mes, ano;
    char nomeMes[20];

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (dia < 1 || dia > 31 || ano <= 0) {
        printf("Data invalida!\n");
        return 0;
    }

    switch (mes) {
        case 1:
            sprintf(nomeMes, "janeiro");
            break;

        case 2:
            sprintf(nomeMes, "fevereiro");
            break;

        case 3:
            sprintf(nomeMes, "marco");
            break;

        case 4:
            sprintf(nomeMes, "abril");
            break;

        case 5:
            sprintf(nomeMes, "maio");
            break;

        case 6:
            sprintf(nomeMes, "junho");
            break;

        case 7:
            sprintf(nomeMes, "julho");
            break;

        case 8:
            sprintf(nomeMes, "agosto");
            break;

        case 9:
            sprintf(nomeMes, "setembro");
            break;

        case 10:
            sprintf(nomeMes, "outubro");
            break;

        case 11:
            sprintf(nomeMes, "novembro");
            break;

        case 12:
            sprintf(nomeMes, "dezembro");
            break;

        default:
            printf("Mes invalido!\n");
            return 0;
    }

    printf("%d de %s de %d\n", dia, nomeMes, ano);

    return 0;
}
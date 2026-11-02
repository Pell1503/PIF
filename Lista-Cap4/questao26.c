#include <stdio.h>

int main() {
    int mes, ano, dias;
    char nomeMes[20];

    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12 || ano <= 0) {
        printf("Dados invalidos!\n");
        return 0;
    }

    switch (mes) {
        case 1:
            sprintf(nomeMes, "Janeiro");
            dias = 31;
            break;

        case 2:
            sprintf(nomeMes, "Fevereiro");

            if (ano % 400 == 0 ||
                (ano % 4 == 0 && ano % 100 != 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;

        case 3:
            sprintf(nomeMes, "Marco");
            dias = 31;
            break;

        case 4:
            sprintf(nomeMes, "Abril");
            dias = 30;
            break;

        case 5:
            sprintf(nomeMes, "Maio");
            dias = 31;
            break;

        case 6:
            sprintf(nomeMes, "Junho");
            dias = 30;
            break;

        case 7:
            sprintf(nomeMes, "Julho");
            dias = 31;
            break;

        case 8:
            sprintf(nomeMes, "Agosto");
            dias = 31;
            break;

        case 9:
            sprintf(nomeMes, "Setembro");
            dias = 30;
            break;

        case 10:
            sprintf(nomeMes, "Outubro");
            dias = 31;
            break;

        case 11:
            sprintf(nomeMes, "Novembro");
            dias = 30;
            break;

        case 12:
            sprintf(nomeMes, "Dezembro");
            dias = 31;
            break;
    }

    printf("%s possui %d dias.\n", nomeMes, dias);

    return 0;
    }
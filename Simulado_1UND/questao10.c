#include <stdio.h>

int main(void) {
    int totalSegundos;
    int horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    totalSegundos %= 3600;

    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n",
           horas, minutos, segundos);

    return 0;
}

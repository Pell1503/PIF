#include <stdio.h>

int main()
{
    /*
        Questão 27

        O programa solicita ao usuário um intervalo de tempo
        informado em segundos.

        Depois, converte esse valor para horas, minutos e segundos.

        Uma hora possui 3600 segundos.

        Para descobrir as horas, utilizamos divisão inteira:

        horas = totalSegundos / 3600;

        O operador % calcula o resto da divisão.

        Assim, podemos descobrir quantos segundos sobraram
        depois de retirar as horas.

        Para calcular os minutos:

        minutos = (totalSegundos % 3600) / 60;

        Para calcular os segundos restantes:

        segundos = totalSegundos % 60;

        Exemplo:

        3665 segundos

        3665 / 3600 = 1 hora

        Restam 65 segundos.

        65 / 60 = 1 minuto

        Restam 5 segundos.

        Resultado:

        1 hora, 1 minuto e 5 segundos.
    */

    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}
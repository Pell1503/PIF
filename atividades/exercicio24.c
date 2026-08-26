#include <stdio.h>

int main()
{
    /*
        Questão 24

        O objetivo é organizar os alunos e suas notas em colunas.

        %-10s:
        - s indica uma string.
        - 10 indica uma largura mínima de 10 caracteres.
        - o sinal - faz o alinhamento à esquerda.

        %5.1f:
        - f indica um número de ponto flutuante.
        - 5 indica largura mínima de 5 caracteres.
        - .1 indica uma casa decimal.

        Dessa forma, as informações ficam alinhadas no console.
    */

    printf("%-10s %5s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %5s\n", "=========", "=====");
    printf("%-10s %5.1f\n", "ALINE", 9.0);
    printf("%-10s %5s\n", "MÁRIO", "DEZ");
    printf("%-10s %5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s %5.1f\n", "SHIRLEY", 7.0);

    return 0;
}
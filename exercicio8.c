#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Questão 08

        O programa utiliza sequências de escape dentro do printf().

        \n = quebra de linha.
        \t = tabulação.
        \" = permite imprimir aspas duplas dentro da string.

        Primeiro, \n move o cursor para a próxima linha.
        Depois, \t adiciona uma tabulação.
        Em seguida, \" imprime uma aspa dupla.
        Por fim, é exibido o texto "Primeiro programa" entre aspas.
    */

    printf("\n\t\"Primeiro programa\"");

    /*
        system("pause") pausa a execução do programa no Windows
        e aguarda uma ação do usuário.
    */
    system("pause");

    /*
        return 0 indica que o programa terminou normalmente.
    */
    return 0;
}
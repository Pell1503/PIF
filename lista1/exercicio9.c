#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Questão 09

        A primeira chamada de printf() utiliza três argumentos
        do tipo caractere com o especificador %c:

        '\n'  -> representa uma quebra de linha.
        '\t'  -> representa uma tabulação.
        '\"'  -> representa o caractere de aspas duplas.

        Como %c recebe esses valores, o resultado da primeira
        chamada será:

            "Primeiro programa

        Porém, existe um erro na segunda chamada:

            printf("%c", "\"");

        O especificador %c espera receber um caractere
        (promovido para int), mas "\" é uma string, ou seja,
        um endereço do tipo char *.

        Para imprimir uma aspa dupla com %c, o correto seria:

            printf("%c", '\"');

        Portanto, o programa original NÃO possui uma saída
        exata e definida pelo padrão C, pois a segunda chamada
        de printf() utiliza um argumento de tipo incorreto
        para %c. Esse erro resulta em comportamento indefinido.

        Se corrigirmos a segunda chamada para:

            printf("%c", '\"');

        a saída será:

            "Primeiro programa"

        O system("PAUSE") ainda poderá mostrar uma mensagem
        adicional no Windows, dependendo do sistema utilizado.
    */

    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');

    /*
        ERRO ORIGINAL:
        printf("%c", "\"");

        CORREÇÃO:
        O argumento deve ser um caractere entre aspas simples.
    */
    printf("%c", '\"');

    system("PAUSE");

    return 0;
}
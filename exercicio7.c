#include <stdio.h>

int main()
{
    // Questão 07 - Exemplos de printf(), quebras de linha e tabulações

    // a) \n = quebra de linha | \t = tabulação
    printf("\n\tBom dia! Shirley.");

    // b) \n = quebra de linha
    printf("Você já tomou café? \n");

   // c) O primeiro \n move o cursor para a próxima linha.
   // O segundo \n faz outra quebra de linha, deixando uma linha em branco.
   // O terceiro \n quebra a linha após "existe!" e inicia "Não insista." na linha seguinte.
    printf("\n\nA solução não existe!\nNão insista.");
    // d) \t = tabulação | \n = quebra de linha
    printf("Duas\tlinhas\tde\tsaída\nou\tuma?");

    // e) %s = texto (string) e \n = quebra de linha
    printf("%s\n%s\n%s\n", "um", "dois", "três");

    return 0;
}
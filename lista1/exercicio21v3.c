#include <stdio.h>

int main()
{
    /*
        Questão 21 - Versão 3

        Nesta versão as frases são colocadas dentro de uma moldura.

        Os caracteres utilizados são da tabela gráfica Code Page 437:

        \xC9 = canto superior esquerdo
        \xBB = canto superior direito
        \xC8 = canto inferior esquerdo
        \xBC = canto inferior direito
        \xCD = linha horizontal
        \xBA = linha vertical

        A quantidade de caracteres horizontais foi ajustada
        para acomodar as frases.
    */

    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em  \xBA\n");
    printf("\xBA programacao.    \xBA\n");
    printf("\xBA Linguagem C.    \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    return 0;
}
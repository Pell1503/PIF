#include <stdio.h>

int main()
{
    /*
        Questão 20

        O programa utiliza caracteres gráficos da Code Page 437.

        Canto superior esquerdo: \xC9
        Linha horizontal:        \xCD
        Canto superior direito:  \xBB
        Linha vertical:          \xBA
        Canto inferior esquerdo: \xC8
        Canto inferior direito:  \xBC

        A moldura possui 4 caracteres de largura e 4 linhas
        de altura.

        A estrutura produzida é equivalente a:

        ╔══╗
        ║  ║
        ║  ║
        ╚══╝

        Observação:
        A aparência dos caracteres pode depender da codificação
        utilizada pelo terminal do sistema.
    */

    printf("\xC9\xCD\xCD\xBB\n");
    printf("\xBA  \xBA\n");
    printf("\xBA  \xBA\n");
    printf("\xC8\xCD\xCD\xBC\n");

    return 0;
}
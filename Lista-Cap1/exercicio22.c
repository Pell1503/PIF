#include <stdio.h>

int main()
{
    /*
       

        As sequências hexadecimais utilizadas incluem:

        \xDC = bloco inferior
        \xDF = bloco superior

        Esses caracteres são combinados com letras e espaços
        para formar a representação gráfica solicitada.

        A aparência final pode variar dependendo da codificação
        utilizada pelo terminal.
    */

    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF\n");
    printf("\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF\n");

    return 0;
}
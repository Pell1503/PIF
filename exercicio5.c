/*
Falta o tipo de retorno da função main
No padrão ANSI C, o correto é: int main ()

Falta a diretiva #include <stdio.h>
Ela é necessária para utilizar a função printf().

Falta a diretiva #include <stdlib.h>
Ela é necessária para utilizar a função system().

Falta return 0;
É recomendado indicar o encerramento normal da função main.

*/

#include <stdio.h>
#include <stdlib.h>


int main (){

    printf("Linguagem C ");
    system("pause");

    return 0 ;
}
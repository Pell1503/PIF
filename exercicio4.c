/*#include <stdlib.h>; → não deve ter ; após o #include.
int Main{} → o correto é int main().
Os comandos do programa devem ficar dentro das chaves { } da função main.
printf( Existem %d semanas no ano.,52); → o texto precisa estar entre aspas: "Existem %d semanas no ano.".
cout << endl; → cout e endl pertencem ao C++, não ao C. Como o programa está em C, essa linha deve ser removida.
system("PAUSE"); → pode ser utilizado, mas não é necessário para o funcionamento do programa.
return 0; deve estar dentro da função main.


*/

//versão corrigida 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);

    system("PAUSE");

    return 0;
}
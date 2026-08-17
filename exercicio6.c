/*

Falta o tipo int na função main

Declaração das variáveis está incorreta
Apenas a foi declarado como int. Além disso, foi utilizado : no final.

Uso de : no lugar de ;  
c=3:
c=3; >> versão correta 

Erro nas aspas do printf
As aspas estão colocadas incorretamente. Os valores a, b e c devem ficar fora da string.

Uso de 0s em vez de Os
"0s números..."

Variável d não foi declarada
O printf menciona d, mas nenhuma variável d foi criada. Isso causaria erro de compilação.

Faltam os arquivos de cabeçalho
Para printf() e system(), devem ser incluídos:

Falta return 0;
É adequado finalizar a função main com:



*/

//versão corrigida 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Os números são: %d %d %d\n", a, b, c);

    system("pause");

    return 0;
}
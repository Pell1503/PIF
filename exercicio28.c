#include <stdio.h>

int main()
{
    /*
        Questão 28

        O programa solicita três números inteiros ao usuário.

        As variáveis a, b e c armazenam os três valores.

        A variável media é do tipo double porque o resultado
        da média pode possuir casas decimais.

        A expressão utiliza 3.0 em vez de 3:

        (a + b + c) / 3.0

        Isso garante que a divisão seja realizada como
        uma operação de ponto flutuante.

        No printf(), o formato %.2f determina que a média
        seja exibida com exatamente duas casas decimais.

        Exemplo:

        Valores:
        8
        7
        10

        Cálculo:

        (8 + 7 + 10) / 3.0 = 8.3333...

        Saída:

        Media: 8.33
    */

    int a;
    int b;
    int c;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("Media: %.2f\n", media);

    return 0;
}
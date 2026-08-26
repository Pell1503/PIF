#include <stdio.h>

int main()
{
    /*
        Questão 18

        Foram declaradas variáveis float para armazenar
        os preços dos produtos.

        O formato %12s reserva uma largura mínima de 12 caracteres
        para o nome do produto e o alinha à direita.

        O formato %12.2f significa:

        12 = largura mínima de 12 caracteres.
        .2 = exatamente duas casas decimais.
        f = número de ponto flutuante.

        O uso da largura dos campos permite organizar os dados
        em colunas no console.
    */

    float lapis = 4.88f;
    float borrachas = 234.54f;
    float canetas = 42.04f;
    float cadernos = 8.00f;
    float fitas = 13.05f;

    printf("%12s %12s\n", "Produto", "Preco");
    printf("%12s %12.2f\n", "Lapis", lapis);
    printf("%12s %12.2f\n", "Borrachas", borrachas);
    printf("%12s %12.2f\n", "Canetas", canetas);
    printf("%12s %12.2f\n", "Cadernos", cadernos);
    printf("%12s %12.2f\n", "Fitas", fitas);

    return 0;
}
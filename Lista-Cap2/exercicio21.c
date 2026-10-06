#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere qualquer do teclado: ");
    scanf(" %c", &caractere);

    /*
     * EXPLICACAO SOBRE A TABELA ASCII:
     * O computador armazena internamente todos os caracteres como numeros inteiros 
     * de 1 byte (0 a 255). A tabela ASCII mapeia cada simbolo grafico para um código numérico. 
     * Ao imprimir um tipo 'char' usando o especificador '%d', exibimos esse codigo binario/decimal subjacente.
     */
    printf("Caractere inserido: '%c'\n", caractere);
    printf("Codigo decimal correspondente na Tabela ASCII: %d\n", caractere);

    return 0;
}
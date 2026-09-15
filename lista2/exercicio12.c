#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int antecessor = numero;
    int sucessor = numero;

    // Utilizando EXCLUSIVAMENTE os operadores unarios de decremento e incremento
    --antecessor; // Operador unario prefixado decremanta 1 unidade
    ++sucessor;   // Operador unario prefixado incrementa 1 unidade

    /*
     * JUSTIFICATIVA LOGICA:
     * Os operadores unarios ++ e -- modificam o valor da variavel diretamente
     * somando ou subtraindo 1 da memoria, o que corresponde diretamente aos 
     * conceitos matematicos de sucessor (n + 1) e antecessor (n - 1).
     */

    printf("Numero digitado: %d\n", numero);
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor:   %d\n", sucessor);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente do gerador com base no tempo atual do sistema
    srand((unsigned int)time(NULL));

    /* 
     * A expressao (rand() % 6) produz o resto da divisao do numero aleatorio por 6,
     * resultando no intervalo [0, 5]. Somando 1, ajustamos para o intervalo [1, 6].
     */
    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;

    printf("--- Lancamento de 3 Dados Aleatorios ---\n");
    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}
#include <stdio.h>

/* Para ativar a depuracao, descomente a linha abaixo
   (ou compile com: gcc -DDEBUG q24_debug.c):                */
/* #define DEBUG */

int somaAteN(int n);

int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Soma de 1 a %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}

/* Sem DEBUG: imprime apenas o resultado final (o trecho de depuracao nem chega ao compilador).
   Com DEBUG: imprime tambem a soma parcial a cada iteracao do laco. */

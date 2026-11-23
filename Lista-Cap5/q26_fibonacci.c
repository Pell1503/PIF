#include <stdio.h>

long fibonacci(int n);

int main() {
    int n;
    printf("Quantidade de termos: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");
    return 0;
}

/* Fica lenta para n grande porque cada chamada gera duas novas chamadas,
   recalculando varias vezes os mesmos subproblemas (ex.: fibonacci(2) e
   calculado inumeras vezes). O numero de chamadas cresce exponencialmente (~2^n). */
long fibonacci(int n) {
    if (n == 0) return 0;   /* casos base */
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

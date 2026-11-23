#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long fi, fr;
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Valor invalido!\n");
        return 1;
    }
    fi = fatorialIterativo(n);
    fr = fatorialRecursivo(n);
    printf("Iterativo: %ld\n", fi);
    printf("Recursivo: %ld\n", fr);
    printf(fi == fr ? "Os resultados coincidem.\n" : "Os resultados diferem!\n");
    return 0;
}

long fatorialIterativo(int n) {
    long r = 1;
    for (int i = 2; i <= n; i++)
        r *= i;
    return r;
}

long fatorialRecursivo(int n) {
    if (n == 0)
        return 1;
    return (long)n * fatorialRecursivo(n - 1);
}

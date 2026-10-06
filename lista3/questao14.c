#include <stdio.h>

int main(void) {
    long long soma = 0;

    for (int i = 1; i <= 100; i++) {
        long long quadrado = (long long)i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma += quadrado;
    }

    printf("Soma total dos quadrados = %lld\n", soma);
    return 0;
}

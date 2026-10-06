#include <stdio.h>

int eh_primo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main(void) {
    int A, B;
    long long soma = 0;
    int encontrou = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B (A < B): ");
    scanf("%d", &B);

    if (A >= B || A < 1 || B < 1) {
        printf("Valores invalidos. Garanta que A < B e ambos sejam positivos.\n");
        return 1;
    }

    printf("Primos no intervalo [%d, %d]: ", A, B);

    for (int i = A; i <= B; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
            soma += i;
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("nenhum");

    printf("\nSoma dos primos: %lld\n", soma);
    return 0;
}

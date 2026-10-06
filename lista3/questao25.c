#include <stdio.h>

int main(void) {
    int n;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (n > 1 && divisores == 2)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}

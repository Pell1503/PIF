#include <stdio.h>

int ehPrimo(int n);

int main() {
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    printf("%d %s primo.\n", n, ehPrimo(n) ? "e" : "nao e");

    printf("Primos de 1 a 50:\n");
    for (int i = 1; i <= 50; i++)
        if (ehPrimo(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

#include <stdio.h>

int main(void) {
    int n;
    unsigned long long a = 1, b = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N deve ser positivo.\n");
        return 1;
    }

    printf("Termos: ");

    if (n >= 1)
        printf("1");

    if (n >= 2)
        printf(" 1");

    for (int i = 3; i <= n; i++) {
        unsigned long long proximo = a + b;
        a = b;
        b = proximo;
        printf(" %llu", b);
    }

    printf("\n");

    if (n == 1)
        printf("Termo %d: 1\n", n);
    else
        printf("Termo %d: %llu\n", n, b);

    return 0;
}

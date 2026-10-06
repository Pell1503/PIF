#include <stdio.h>

int main(void) {
    int n;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++)
        fatorial *= i;

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}

#include <stdio.h>

int ehPar(int n);

int main() {
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    if (ehPar(n))
        printf("%d e par.\n", n);
    else
        printf("%d e impar.\n", n);
    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

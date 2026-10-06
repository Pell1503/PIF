#include <stdio.h>

int main(void) {
    int n;

    printf("Digite uma dimensao impar (3 a 19): ");
    scanf("%d", &n);

    if (n < 3 || n > 19 || n % 2 == 0) {
        printf("Dimensao invalida. Digite um numero impar entre 3 e 19.\n");
        return 1;
    }

    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            if (coluna == linha || coluna == n - 1 - linha)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

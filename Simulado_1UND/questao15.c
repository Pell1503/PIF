#include <stdio.h>

int main(void) {
    int n;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    for (int linha = 1; linha <= n; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d", numero++);

            if (coluna < linha)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

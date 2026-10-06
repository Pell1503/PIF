#include <stdio.h>

int main(void) {
    int num;
    int encontrou = 0;

    printf("Digite um limite inteiro positivo: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("O limite deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou)
        printf("Nenhum numero satisfaz a condicao.");

    printf("\n");
    return 0;
}

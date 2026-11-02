#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("Ano invalido!\n");
    } else if (ano % 400 == 0 ||
              (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}
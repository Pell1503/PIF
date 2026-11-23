#include <stdio.h>

int ehBissexto(int ano);

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ehBissexto(ano))
        printf("%d e um ano bissexto.\n", ano);
    else
        printf("%d nao e um ano bissexto.\n", ano);
    return 0;
}

int ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

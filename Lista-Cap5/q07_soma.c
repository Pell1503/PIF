#include <stdio.h>

int soma(int a, int b);

int main() {
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Soma = %d\n", soma(x, y));
    return 0;
}

int soma(int a, int b) {
    return a + b;
}

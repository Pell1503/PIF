#include <stdio.h>

int maior(int a, int b);

int main() {
    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Maior = %d\n", maior(x, y));
    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}

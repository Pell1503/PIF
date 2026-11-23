#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Valores devem ser positivos!\n");
        return 1;
    }
    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);
    return 0;
}

int mdc(int a, int b) {
    if (b == 0)             /* caso base */
        return a;
    return mdc(b, a % b);   /* passo recursivo (Euclides) */
}

void simplifica(int num, int den) {
    int d = mdc(num, den);
    printf("Fracao simplificada: %d/%d\n", num / d, den / d);
}

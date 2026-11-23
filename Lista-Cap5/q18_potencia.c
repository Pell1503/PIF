#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int b, e;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &b, &e);
    if (e < 0) {
        printf("Expoente nao pode ser negativo!\n");
        return 1;
    }
    printf("%d ^ %d = %ld\n", b, e, potencia(b, e));
    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0)                              /* CASO BASE: x^0 = 1 */
        return 1;
    return (long)base * potencia(base, expoente - 1); /* PASSO RECURSIVO: base * base^(exp-1) */
}

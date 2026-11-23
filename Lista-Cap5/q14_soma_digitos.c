#include <stdio.h>

int somaDigitos(int n);

int main() {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("Soma dos digitos = %d\n", somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    if (n == 0)                       /* CASO BASE: sem digitos restantes */
        return 0;
    return (n % 10) + somaDigitos(n / 10);  /* PASSO RECURSIVO: ultimo digito + soma do resto */
}

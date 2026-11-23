#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n deve ser positivo!\n");
        return 1;
    }
    printf("Regressiva:\n");
    contagem(n);
    printf("Fogo!\n");

    printf("Crescente:\n");
    contagemCrescente(n);
    printf("Fogo!\n");
    return 0;
}

/* Versao regressiva: printf ANTES da chamada recursiva -> imprime na ida (empilhamento). */
void contagem(int n) {
    if (n == 0)             /* caso base */
        return;
    printf("%d\n", n);
    contagem(n - 1);
}

/* Versao crescente: printf DEPOIS da chamada recursiva -> imprime na volta (desempilhamento),
   entao os valores saem na ordem inversa: 1, 2, ..., n. */
void contagemCrescente(int n) {
    if (n == 0)             /* caso base */
        return;
    contagemCrescente(n - 1);
    printf("%d\n", n);
}

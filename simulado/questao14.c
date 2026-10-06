#include <stdio.h>

int main(void) {
    const int SENHA = 2026;
    int tentativa;
    int contador = 0;
    int acesso = 0;

    while (contador < 3) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        contador++;

        if (tentativa == SENHA) {
            printf("Acesso Concedido!\n");
            acesso = 1;
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (!acesso)
        printf("Conta Bloqueada por Segurança!\n");

    return 0;
}

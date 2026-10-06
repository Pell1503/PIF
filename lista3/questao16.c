#include <stdio.h>

int main(void) {
    const int senha_secreta = 2026;
    int senha;
    int acertou = 0;

    for (int tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senha_secreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            acertou = 1;
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (!acertou)
        printf("Conta Bloqueada por Segurança!\n");

    return 0;
}

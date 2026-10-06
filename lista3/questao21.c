#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) {
    char secreta, tentativa;
    int tentativas = 0;

    srand((unsigned int)time(NULL));
    secreta = (char)(rand() % 26 + 'a');

    do {
        printf("Digite uma letra minuscula: ");
        scanf(" %c", &tentativa);
        tentativa = (char)tolower((unsigned char)tentativa);
        tentativas++;

        if (tentativa < secreta)
            printf("A letra secreta vem depois no alfabeto.\n");
        else if (tentativa > secreta)
            printf("A letra secreta vem antes no alfabeto.\n");
        else
            printf("Parabens! Voce acertou.\n");

    } while (tentativa != secreta);

    printf("Total de tentativas: %d\n", tentativas);
    return 0;
}

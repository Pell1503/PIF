#include <stdio.h>

int main() {
    char letra_maiuscula, letra_minuscula;

    printf("Digite uma letra MAIUSCULA: ");
    scanf(" %c", &letra_maiuscula);

    // Na tabela ASCII, a diferenca numerica de offset entre 'A' (65) e 'a' (97) eh exatamente 32
    letra_minuscula = letra_maiuscula + 32;

    printf("Letra maiuscula: %c\n", letra_maiuscula);
    printf("Letra minuscula convertida (offset ASCII): %c\n", letra_minuscula);

    return 0;
}
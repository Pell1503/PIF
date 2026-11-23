#include <stdio.h>

#define DOBRO(x) x*2            /* macro SEM parenteses de protecao */
#define DOBRO_OK(x) ((x) * 2)   /* macro corrigida */

int dobro(int x);

int main() {
    /* DOBRO(2+3) vira 2+3*2 = 8 (a precedencia do * atua so sobre o 3).
       dobro(2+3) avalia 2+3 = 5 ANTES da chamada, retornando 10.
       Macro e substituicao textual; funcao recebe o valor ja calculado. */
    printf("DOBRO(2+3)    = %d\n", DOBRO(2+3));
    printf("dobro(2+3)    = %d\n", dobro(2+3));

    /* Macro corrigida: ((2+3) * 2) = 10 */
    printf("DOBRO_OK(2+3) = %d\n", DOBRO_OK(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}

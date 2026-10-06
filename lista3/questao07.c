#include <stdio.h>

void versao_for(void) {
    for (int i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n");
}

void versao_while(void) {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void versao_do_while(void) {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main(void) {
    printf("FOR:\n");
    versao_for();

    printf("WHILE:\n");
    versao_while();

    printf("DO-WHILE:\n");
    versao_do_while();

    /*
     * Para este caso, o for e o mais adequado porque existe um
     * intervalo definido (0 a 100) e um contador claramente controlado.
     */
    return 0;
}

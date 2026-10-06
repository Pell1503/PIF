#include <stdio.h>

int main(void) {
    printf("%-10s %-10s %s\n", "Decimal", "Hex", "Caractere");

    for (int codigo = 32; codigo <= 126; codigo++)
        printf("%-10d %-10X %c\n", codigo, codigo, (char)codigo);

    return 0;
}

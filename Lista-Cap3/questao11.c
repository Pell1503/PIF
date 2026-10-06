#include <stdio.h>

int main(void) {
    int A, B;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    if (A <= B) {
        for (int i = A; i <= B; i++)
            printf("%d ", i);
    } else {
        for (int i = A; i >= B; i--)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Digite as 4 notas do aluno separadas por espaco: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    float media_simples = (n1 + n2 + n3 + n4) / 4.0f;
    
    // Pesos: P1=1, P2=1, P3=2, P4=2. Soma dos pesos = 6
    float media_ponderada = ((n1 * 1.0f) + (n2 * 1.0f) + (n3 * 2.0f) + (n4 * 2.0f)) / 6.0f;

    printf("Media Aritmetica Simples:   %.2f\n", media_simples);
    printf("Media Aritmetica Ponderada: %.2f\n", media_ponderada);

    return 0;
}
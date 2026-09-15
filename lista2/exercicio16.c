#include <stdio.h>
#include <math.h>

int main() {
    double altura_degrau_cm, altura_total_m;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total que deseja alcancar (em metros): ");
    scanf("%lf", &altura_total_m);

    // Compatibilizacao de unidades: converte metros para centimetros
    double altura_total_cm = altura_total_m * 100.0;

    // ceil() garante o arredondamento para cima caso falte uma fracao de degrau
    double quantidade_degraus = ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus necessarios: %.0f\n", quantidade_degraus);

    return 0;
}
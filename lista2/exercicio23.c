#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio;
    int duracao_segundos;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duracao total do experimento em segundos: ");
    scanf("%d", &duracao_segundos);

    // Converte todo o horario inicial para segundos absolutos no dia
    int inicio_em_segundos = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;
    int termino_em_segundos = inicio_em_segundos + duracao_segundos;

    // Garante que o horario nao ultrapasse as 24 horas de um dia (86400 segundos)
    termino_em_segundos = termino_em_segundos % 86400;

    // Decomposicao do tempo de termino usando operacoes de divisao e resto
    int h_termino = termino_em_segundos / 3600;
    int m_termino = (termino_em_segundos % 3600) / 60;
    int s_termino = termino_em_segundos % 60;

    printf("Horario de termino do experimento: %02d:%02d:%02d\n", h_termino, m_termino, s_termino);

    return 0;
}
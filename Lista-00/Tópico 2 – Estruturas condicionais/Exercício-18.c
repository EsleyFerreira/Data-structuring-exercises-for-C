#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista;

    // Solicita a entrada das velocidades
    printf("Digite a velocidade máxima em km/h: ");
    scanf("%d", &velocidade_maxima);

    printf("Digite a velocidade do motorista em km/h: ");
    scanf("%d", &velocidade_motorista);

    // Calcula a diferença de velocidade
    int diferenca = velocidade_motorista - velocidade_maxima;

    if (diferenca > 0) {
        int multa = diferenca * 5;
        printf("O motorista excedeu a velocidade máxima em %d km/h.\n", diferenca);
        printf("Multa a ser paga: R$ %d,00\n", multa);
    } else {
        printf("O motorista estava dentro do limite de velocidade. Não há multa.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Solicita o placar apostado pelo usuário
    printf("Informe o placar apostado (no formato 'XxY'): ");
    
   
int apostado[2];
    
   
scanf("%dx%d", &apostado[0], &apostado[1]);

    

// Solicita o placar real do jogo
    printf("Informe o placar real do jogo (no formato 'XxY'): ");
    
   
int real[2];
    scanf("%dx%d", &real[0], &real[1]);

    // Calcula a pontuação
    int pontuacao = 0;
    if (apostado[0] == real[0] && apostado[1] == real[1]) {
        pontuacao = 10;
    } else if (apostado[0] == real[0] || apostado[1] == real[1]) {
        pontuacao = 5;
    }

    // Exibe a pontuação do apostador
    printf("Você fez %d pontos.\n", pontuacao);

    return 0;
}

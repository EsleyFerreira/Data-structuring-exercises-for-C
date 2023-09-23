#include <stdio.h>

int main() {
    double vetorX[5];
    double vetorY[5];
    double produtoEscalar = 0.0;

    
    printf("Digite os 5 elementos do primeiro vetor (X):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetorX[i]);
    }

    printf("Digite os 5 elementos do segundo vetor (Y):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &vetorY[i]);
    }

    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    
    printf("Produto Escalar: %.2lf\n", produtoEscalar);

    return 0;
}

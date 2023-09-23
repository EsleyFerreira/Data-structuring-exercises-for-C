#include <stdio.h>

int main() {
    int tamanho = 20;
    int vetor[tamanho];

    
    printf("Digite os 20 números inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] == vetor[j]) {
                
                vetor[j] = -1;
            }
        }
    }

    
    printf("Elementos do vetor sem duplicatas:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != -1) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}

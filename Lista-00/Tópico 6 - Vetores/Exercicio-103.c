#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], interseccao[10];
    int i, j, k = 0;

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                int estaNaInterseccao = 0;
                
                for (int l = 0; l < k; l++) {
                    if (interseccao[l] == vetor1[i]) {
                        estaNaInterseccao = 1;
                        break;
                    }
                }
                
                if (!estaNaInterseccao) {
                    interseccao[k++] = vetor1[i];
                }
                break;
            }
        }
    }

    printf("a intersecção dos dois vetores são:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", interseccao[i]);
    }

    return 0;
}

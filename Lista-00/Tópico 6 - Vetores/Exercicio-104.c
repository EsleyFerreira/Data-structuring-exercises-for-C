#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorUniao[10 * 2];
    int i, j, k, repetido;

    printf("Digite os elementos do vetor 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do vetor 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    k = 0;
    for (i = 0; i < 10; i++) {
        vetorUniao[k] = vetor1[i];
        k++;
    }

    for (i = 0; i < 10; i++) {
        repetido = 0;
        for (j = 0; j < 10; j++) {
            if (vetor2[i] == vetor1[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            vetorUniao[k] = vetor2[i];
            k++;
        }
    }

    printf("O resultado da união dos dois vetores é:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vetorUniao[i]);
    }
    printf("\n");

    return 0;
}

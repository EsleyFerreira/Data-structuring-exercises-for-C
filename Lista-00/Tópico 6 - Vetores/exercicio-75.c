#include <stdio.h>

int main() {
    int n = 10;
    double vetorOriginal[10];
    double vetorQuadrado[10];

    printf("Digite os 10 números reais:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &vetorOriginal[i]);
    }

    for (int i = 0; i < n; i++) {
        vetorQuadrado[i] = vetorOriginal[i] * vetorOriginal[i];
    }

    printf("Conjunto Original:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", vetorOriginal[i]);
    }
    printf("\n");

    printf("Conjunto com Quadrados:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", vetorQuadrado[i]);
    }
    printf("\n");

    return 0
   }   

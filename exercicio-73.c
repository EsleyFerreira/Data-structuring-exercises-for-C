#include <stdio.h>

int main() {
    int tamanho; 
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho]; 

   
    for (int i = 0; i < tamanho; i++) {
        printf("Informe o valor do elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Valores do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

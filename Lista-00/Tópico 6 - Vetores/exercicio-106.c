#include <stdio.h>

int main() {
    int vetor[15];
    
   
    printf("Digite 15 valores para preencher o vetor:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    int compactador = 0; 

    for (int i = 0; i < 15; i++) {
        if (vetor[i] != 0) {
            vetor[compactador] = vetor[i];
            compactador++;
        }
    }

 
    for (int i = compactador; i < 15; i++) {
        vetor[i] = 0;
    }

   
    printf("Vetor compactado:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}


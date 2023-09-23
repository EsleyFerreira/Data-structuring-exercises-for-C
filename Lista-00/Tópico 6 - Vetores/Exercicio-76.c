#include <stdio.h>

int main()
{
    int vetor[8];
    int x, y;
    
    printf("Digite os 8 valores do vetor: \n");
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite os valores de X e Y (posições de 0 a 7):\n");
    scanf("%d %d", &x, &y);
    
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        
        int soma = x + y;
        printf("A soma dos valores nas posicoes %d e %d e: %d\n", x, y, soma);
    } else {
        printf("Posicoes invalidas. Certifique-se de que X e Y estao entre 0 e 7.\n");
    }
    
    return 0;
}

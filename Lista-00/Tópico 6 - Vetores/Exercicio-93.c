#include <stdio.h>

int main() 
{
    int vetor1[10];
    int vetor2[10];
    int i, j = 0;

    printf("Digite 10 números inteiros dentro de um intervalo de 0 a 50: \n");

    for (i = 0; i < 10; i++) 
    {
        do 
        {
            printf("\nDigite o %dº número: ", i + 1);
            scanf("%d", &vetor1[i]);
        } 
        while (vetor1[i] < 0 || vetor1[i] > 50);
    }

    for (i = 0; i < 10; i++) 
    {
        if (vetor1[i] % 2 != 0) 
        {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    printf("\nVetor 1:\n");
    
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", vetor1[i]);
        if (i % 2 == 1) 
        {
            printf("\n");
        }
    }

    printf("\nVetor 2 (números ímpares do vetor 1):\n");
    
    for (i = 0; i < j; i++) 
    {
        printf("%d ", vetor2[i]);
        if (i % 2 == 1) 
        {
            printf("\n");
        }
    }

    return 0;
}


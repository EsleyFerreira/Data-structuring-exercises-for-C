#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int temp = 0;
    int troca = 0;

    for (int i = 0; i<tamanho-1; i++)
    {
        for (int j = 0; j<tamanho-i-1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                troca = 1;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
}
int main()
{
    int vetor[20];
    int tamanho = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0 || tamanho > 20)
    {
        printf("Erro! O tamanho do vetor deve ser entre 1 e 20.\n");
        
        return 1;
    }

    printf("Digite os elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, tamanho);

    printf("Vetor ordenado:");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n%d", vetor[i]);
    }
    
    return 0;
}

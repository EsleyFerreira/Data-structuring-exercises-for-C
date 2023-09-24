#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int vetor[10], int n)
{
    int k, j, aux;

    for (k = n - 1; k > 0; k--)
    {
        for (j = 0; j < k; j++)
        {

            if (vetor[j] > vetor[j + 1])
            {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
int main()
{
    int vetor[10];
    int vetor2[10];
    int maxDivisor = 1000000000;
    int i, tamanho = 10, contador = 0;
    unsigned int numero1, numero2, restoDivn1, restoDivn2;

    printf("Digite dois numeros inteiros nao negativos\n");
    scanf("%d %d", &numero1, &numero2);
    fflush(stdin);
    printf("Numero 1 = %d        Numero 2 = %d\n", numero1, numero2);

    for(i=0; i<10; i++)
    {

        vetor[i] = (numero1/maxDivisor);
        restoDivn1 = (numero1%maxDivisor);
        numero1 = restoDivn1;

        vetor2[i] = (numero2/maxDivisor);
        restoDivn2 = (numero2%maxDivisor);
        numero2 = restoDivn2;

        maxDivisor = (maxDivisor/10);

        printf("vetor[%d] = %d   vetor2[%d] = %d\n", i, vetor[i], i, vetor2[i]);
    }

    bubble_sort(vetor, tamanho);
    bubble_sort(vetor2, tamanho);

    for(int k=0; k<10; k++)
    {
        printf("[%d]   [%d]\n", vetor[k], vetor2[k]);

    }

    for(int l=0; l<10; l++)
    {

        if(vetor[l] == vetor2[l])
        {
            contador++;
        }
        else
        {
            break;
        }
    }

    if(contador == 10)
    {

        printf("Os numero 1 eh permutacao do numero 2");
    }
    else
    {

        printf("O numero 1 NAO eh permutacao do numero 2");
    }

}

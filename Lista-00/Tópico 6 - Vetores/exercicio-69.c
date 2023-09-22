#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A[6] = {1, 0, 5, -2, -5, 7}, i;

    printf("Os elementos do vetor A são iguais a:\n");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

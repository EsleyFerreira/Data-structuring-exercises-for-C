//Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.

#include <stdio.h>
int main()
{

    int num = 0;

    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("O numero %d eh um par", num);
    }
    else
    {
        printf("O numero %d nao eh um par", num);
    }
    return 0;
}

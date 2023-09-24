#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int baralho[52];
    int contador, j, achou, numero;

    srand(time(NULL));

    for (contador = 0; contador < 52; contador++)
    {
        do
        {
            achou = 0;
            numero = rand() % 52 + 1;

            for (j = 0; j < 52; j++)
                if (numero == baralho[j])
                    achou = 1;

        }
        while (achou);
        baralho[contador] = numero;

    }
    for (j = 0; j < 52; j++)
    {

        printf("[%d]",baralho[j]);
    }
}

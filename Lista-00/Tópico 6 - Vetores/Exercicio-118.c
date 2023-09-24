#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocidadeCarro[60];
    int velocidadeVia[100];
    float multaMenor = 200;
    float multaMaior = 300;
    float totalMultas  = 0;
    int contadorExcedeMenor = 0;
    int contadorExcedeMaior = 0;
    int metrosAndados = 0;
    int tomouMulta = 0;


    //Para não ter que digitar todas as velocidades vamos usar a função rand

    for(int i=0; i<=59; i++)
    {

        velocidadeCarro[i] = (rand() % 10);
    }
    for(int j=0; j<=99; j++)
    {

        velocidadeVia[j] = (rand() % 100);
    }
    for(int k=0; k<=99; k++)
    {

        if(k<=59)
        {
            printf("VelocidadeCarro[%d] = %d    VelocidadeVia[%d] = %d\n", k, velocidadeCarro[k], k, velocidadeVia[k]);
        }
        else
        {

            printf("                            VelocidadeVia[%d] = %d\n", k, velocidadeVia[k]);
        }
    }

    for(int l=0; l<=99; l++)
    {

        printf("No quarteirao[%d] a distancia de metros andados =  %d\n",l, metrosAndados);
        metrosAndados = 0;
        tomouMulta = 0;

        for(int m=0; m<= 59; m++)
        {

            if(metrosAndados <= 100)
            {
                metrosAndados = metrosAndados + velocidadeCarro[m];

                if((velocidadeCarro[m] > velocidadeVia[l]) && tomouMulta == 0)
                {

                    tomouMulta = 1;

                    if(velocidadeVia[l] > 0 && (velocidadeCarro[m] / velocidadeVia[l]) < 1.2)
                    {

                        totalMultas = totalMultas + multaMenor;
                        multaMenor = multaMenor * 1.5;
                        contadorExcedeMenor++;

                    }
                    else if(velocidadeVia[l] > 0 && (velocidadeCarro[m] / velocidadeVia[l]) > 1.2)
                    {

                        totalMultas = totalMultas + multaMaior;
                        multaMaior = multaMaior * 1.5;
                        contadorExcedeMaior++;
                    }
                }
            }
        }
    }

    printf("****************************************************\n");
    printf("O total de multas menor que 1,2 foi:  %d", contadorExcedeMenor);
    printf("O total de multas MAIOR que 1,2 foi:  %d", contadorExcedeMaior);
    printf("O total de multas eh:   %.2f\n", totalMultas);

    return 0;
}

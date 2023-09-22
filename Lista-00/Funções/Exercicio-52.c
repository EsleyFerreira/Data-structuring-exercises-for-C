#include <stdio.h>
#include <math.h>
                                         // Implementar a função RaizQuadrada.
float raizQuadrada(float numero)
{
    if (numero < 0)
    {
        printf("Erro: Não é possível calcular a raiz quadrada de um número negativo.\n");
        return -1.0; // Retorno de erro
    }

    float estimativa = numero; 

    float erro_maximo = 0.0001; 

    while (1)
    {
        float proxima_estimativa = 0.5 * (estimativa + numero / estimativa); 

        if (fabs(proxima_estimativa - estimativa) < erro_maximo)
        {
            return proxima_estimativa;
        }

        estimativa = proxima_estimativa;
    }
}

int main()
{
    float numero;
    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%f", &numero);

    float resultado = raizQuadrada(numero);
    if (resultado >= 0)
    {
        printf("Raiz quadrada calculada: %.0f\n", resultado);
    }

    return 0;
}

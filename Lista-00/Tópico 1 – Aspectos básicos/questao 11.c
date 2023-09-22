#include <stdio.h>
#include <math.h>
#define GRAVIDADE 9.81
int main()
{
    float altura = 0;
    float velocidade = 0;
    float angulo = 0;
    
    
    printf("\nDigite a altura relativa ao solo de onde o projétil será lançado: ");
    scanf("%f", &altura);
    printf("\nDigite a velocidade inicial em m/s: ");
    scanf("%f", &velocidade);
    printf("\nDigite o angulo de lançamento: ");
    scanf("%f", &angulo);
    
    float angulo_radianos = angulo * M_PI / 180.0;
    float tempo_voo = (2.0 * velocidade * sin(angulo_radianos)) / GRAVIDADE;
    float distancia = velocidade * cos(angulo_radianos) * tempo_voo;
    
    printf("\nO projétil atingirá o chão a %.2f metros de distância do ponto de lançamento.\n", distancia);
    return 0;
}

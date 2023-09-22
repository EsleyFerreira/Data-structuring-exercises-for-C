// Um corpo se move sobre uma reta e duplica sua velocidade,
// a cada segundo, durante os primeiros 10s. Seja 2 m/s a velocidade inicial.
// Qual é a velocidade média nos primeiros 10s? Responda a essa pergunta elaborando um
// programa em C que simula a variação da velocidade e o deslocamento do corpo,
//  com intervalos de tempo variando entre 1 s e 0,1 s.

#include <stdio.h>

int main()
{
    double velocidade = 2.0;
    double deslocamento = 0.0;
    double tempo = 0.0;

    double tempo_intervalo = 1.0;
    double velocidade_intervalo = 2.0;

    double tempo_total = 10.0;
    double velocidade_media = 0.0;

    while (tempo < tempo_total)
    {
        velocidade += velocidade_intervalo;

        double deslocamento_intervalo = velocidade * tempo_intervalo;

        deslocamento += deslocamento_intervalo;

        tempo += tempo_intervalo;

        if (tempo_intervalo > 0.1)
        {
            tempo_intervalo = 0.1;
        }
    }

    // Calcula a velocidade média
    velocidade_media = deslocamento / tempo_total;

    printf("Velocidade media nos primeiros 10 segundos: %.2f m/s\n", velocidade_media);

    return 0;
}

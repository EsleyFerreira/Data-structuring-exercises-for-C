#include <stdio.h>
#include <math.h>

double calcula_posicao_passageiro(double d, double t) {
  return 8 * t;
}

double calcula_posicao_trem(double a, double t) { 
  return 0.5 * a * t * t;
}

int main() {
  double d = 30.0, a = 1.0, t, dc = 0.0;

  while (d >= dc) {
    t = 0.1;
    double posicaoPassageiro, posicaoTrem;

    do {
      posicaoPassageiro = calcula_posicao_passageiro(d, t);
      posicaoTrem = calcula_posicao_trem(a, t);
      t -= 0.1;
    } while (posicaoPassageiro >= posicaoTrem && t >= 0.1);

    if (posicaoPassageiro >= posicaoTrem) {
      dc = d;
    }

    d--; 
  }

  double velocidadeTrem = a * t;

  double velocidadeMediaTrem = 2 * velocidadeTrem;

  printf("Distância crítica (dc): %.1lf m\n", dc);
  printf("Velocidade do trem quando o passageiro consegue pegá-lo: %.1lf m/s\n",
         velocidadeTrem);
  printf("Velocidade média do trem até esse ponto: %.1lf m/s\n",
         velocidadeMediaTrem);

  return 0;
}

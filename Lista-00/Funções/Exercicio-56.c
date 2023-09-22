#include <stdio.h>

/* 56° - Faça uma função que recebe, por parâmetros, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar a duração do jogo em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/

 int duracao_jogo(int inicioH_jogo, int inicioM_jogo, int finalH_jogo, int finalM_jogo){
    inicioM_jogo = inicioH_jogo * 60 + inicioM_jogo;
    finalM_jogo =  finalH_jogo * 60 + finalM_jogo;

    if(finalM_jogo < finalH_jogo){
      finalM_jogo += 24 * 60;
    }

   int duracao = finalM_jogo - inicioM_jogo;
   return duracao;
  }

int main(void) {
  
  int inicioH_jogo, inicioM_jogo, finalH_jogo, finalM_jogo;

  printf("Digite a hora do começo do jogo: ");
  scanf("%d %d", &inicioH_jogo, &inicioM_jogo);

  printf("Digite a hora do termino do jogo: ");
  scanf("%d %d", &finalH_jogo, &finalM_jogo);

  int duracao = duracao_jogo(inicioH_jogo, inicioM_jogo, finalH_jogo, finalM_jogo);

  printf("A duração do jogo foi: %d minutos", duracao);

  return 0;
}

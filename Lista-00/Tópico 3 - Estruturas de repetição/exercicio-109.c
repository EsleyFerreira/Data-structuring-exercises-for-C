#include <stdio.h>

void bubblesort ( float vetor [10], int tamanho){
  int eu, j ;
  float aux;

  for ( i = 0; i = < tamanho - 1; i ++){
    for ( j = 0; j < tamanho - i -  1; j ++){
      if ( vetor [j] > vetor[j+1] ) {
        aux = vetor[j];
        vetor [j] = vetor [j+1];
        vetor [j+1] = aux;
      }
   }  
  }
}
int principal(){
  int eu;
  float vetor[10];

  printf("digite os numeros: \n ");

  para (eu = 0; eu < 10; eu ++){
      scanf ( " %f ", &vetor[i]);
    
  }

  bubblesort ( vetor, 10 );
  printf("elementos do vetor ordenado: \n ");
  
  para ( eu = 0; eu < 10; eu ++) {
    printf("%.2f", vetor[i]);
  }
  return 0;
}

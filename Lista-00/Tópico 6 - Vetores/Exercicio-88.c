#include <stdio.h>

int main(void) {

  float v[5];
  int codigo;

 
  printf("digite  os 5 numeros reais para entrar no vetor\n");
  for(int i=0; i<5; i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%f", &v[i]);    
  }
  printf("digite o codigo\n[0] para finalizar\n[1] para mostrar na ordem direta\n[2] para mostrar na ordem inversa:\n");
  scanf("%d", &codigo);

  if(codigo == 0){
    printf("programa finalizado.\n");
  }
  else if (codigo == 1){
    printf("vetor na ordem direta:\n");
    for(int i = 0; i < 5; i++){
       printf("%.2f", v[i]);
    }   
  }
      

  else if(codigo == 2){
    printf("vetor na ordem inversa:\n");
    for( int i = 4; i>=0; i--){
      printf("%.2f", v[i]);
    }
  }

  else{
    printf("codigo invalido.\n");
  }    
  return 0; 
}

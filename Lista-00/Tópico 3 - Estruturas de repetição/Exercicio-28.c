#include <stdio.h>

int main(){
    int num;
    int Primo = 1;

  printf("Diga um número inteiro: ");
  scanf("%d", &num);

  if (num <= 1){
      Primo = 0;

  } else {

    for (int i = 2; i * i <= num; i++){
      if(num %i == 1){
        Primo = 1;
        break;
      }
    }
   }

printf("%d %s um número Primo.", num, Primo ?"é":"não é");


return 0;
}

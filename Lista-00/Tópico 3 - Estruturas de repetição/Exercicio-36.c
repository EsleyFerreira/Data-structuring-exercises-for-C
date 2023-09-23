#include <stdio.h>

int main() {

  int dominos [7][2] = {{0,0}, {0,1}, {0,2}, {0,3}, {0,4}, {0,5}, {0,6}};
  int soma = 0;

  for (int i = 0; i < 7; i++){
    for (int j = 0; j < 2; j++){
      if (dominos [i][j] == 4){
             soma += 4;
      }
    }
  }

printf("A soma de todos os Quatro lados do do dominó será: %d", soma);

return 0;
}

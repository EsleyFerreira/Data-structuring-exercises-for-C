#include <stdio.h>

int main()
{
  int num = 0;
  int cont = 0;

  for(int i = 0; i<20; i++)
    {
      printf("Digite os números: ");
      scanf("%d", &num);

      if(num >= 0 && num <= 100)
      {
        cont++;
      }
    }
   printf("\nQuantidade de números entre 0 e 100: %d", cont);
  
  return 0;
}

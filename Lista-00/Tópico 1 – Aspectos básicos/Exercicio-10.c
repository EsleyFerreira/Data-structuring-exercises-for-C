#include <stdio.h>

int main ()
{

  int num = 0, soma = 0;

  while (num >= 0)
    {
      printf ("digite um numero negativo para parar\n");
      printf ("digite um numero: ");
      scanf ("%d", &num);
      if (num >= 0)
	{
	  soma += num;
	  printf ("o valor da soma C): %d\n", soma);
	}
    }
  return 0;
}

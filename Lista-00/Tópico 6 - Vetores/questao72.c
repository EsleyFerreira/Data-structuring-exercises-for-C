#include <stdio.h>

int main()
{ 
    int A[] = {1, 0, 5, -2, -5, 7};
    int soma = 0;
    int p;
    
    soma = A[0] + A[1] + A[5]; 
    A[4] = 100;
    
    for(p = 0; p < 6; p++)
     {
         printf("%d\n", A[p]);
     }

    return 0;
}

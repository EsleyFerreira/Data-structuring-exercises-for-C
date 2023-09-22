#include <stdio.h>

int main()
{ 
    int p;
    const int N = 3;
    int A[N], B[N], C[N];
    
    for(p = 0; p < N; p++)
    {
        scanf("%d", &A[p]);
    }
    
    for(p = 0; p < N; p++)
    {
        scanf("%d", &B[p]);
    }
    
    for(p = 0; p < N; p++)
    {
       C[p] = A[p] - B[p];
    }
    
    for(p = 0; p < N; p++)
    {
        printf("%d\n", C[p]);
    }

    return 0;
}

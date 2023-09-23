#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    int maior = 0, menor = 99999;
    
    printf("Digite cinco valores qualquer: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    if (n1 >= maior) {
        maior = n1;
    }
    if (n2 >= maior) {
        maior = n2;
    }
    if (n3 >= maior) {
        maior = n3;
    }
    if (n4 >= maior) {
        maior = n4;
    }
    if (n5 >= maior) {
        maior = n5;
    }
    if (n1 <= menor) {
        menor = n1;
    }
    if (n2 <= menor) {
        menor = n2;
    }
    if (n3 <= menor) {
        menor = n3;
    }
    if (n4 <= menor) {
        menor = n4;
    }
    if (n5 <= menor) {
        menor = n5;
    }
    
    float media = (n1+n2+n3+n4+n5) / 5;
    
    printf("\nValores digitados = %d %d %d %d %d", n1, n2, n3, n4, n5);
    printf("\nMedia dos valores = %.2f", media);
    printf("\nNumero maior = %d", maior);
    printf("\nNumero menor = %d", menor);
    
    return 0;
}

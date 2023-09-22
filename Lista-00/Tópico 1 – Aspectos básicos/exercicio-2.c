#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &num3);

   
    media = (float)(num1 + num2 + num3) / 3;

   
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}

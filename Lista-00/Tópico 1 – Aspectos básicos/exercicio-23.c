#include <stdio.h>

int main() {
    double rendaMensal;
    double impostoDevido;

    printf("Informe a renda mensal em reais: ");
    scanf("%lf", &rendaMensal);

    
    if (rendaMensal > 0) {
        impostoDevido = (rendaMensal * 0.075) - 122.78;
    }
        if (impostoDevido < 0) {
            impostoDevido = 0;
        }

        printf("Imposto devido: R$ %.2lf\n", impostoDevido);
    } else {
        printf("Renda inválida. Informe um valor maior que zero.\n");
    }

    return 0;
}

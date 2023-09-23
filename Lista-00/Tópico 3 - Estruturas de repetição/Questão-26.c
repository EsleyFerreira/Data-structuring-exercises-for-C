#include <stdio.h>

int main() {
    int n = 15; // Número de termos desejados
    long long int termo1 = 0, termo2 = 1, proximoTermo;

    printf("Os primeiros %d termos da série de Fibonacci:\n", n);

    for (int i = 1; i <= n; ++i) {
        printf("%lld, ", termo1);
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("\n");

    return 0;
}
